#include "Piano.hpp"



Piano::Piano()
{
	
	InitWindow(width,height, "Paino");


	// Push Stars
	for (int i = 0; i < 1000; i++)
	{
		stars.emplace_back();
	}
}

Piano::~Piano()
{
	CloseWindow();
}

void Piano::init()
{

	SetTargetFPS(144);
	while (!WindowShouldClose())
	{
		play_piano();
		render();
	}

}

void Piano::render()
{
	float dt = GetFrameTime();


	BeginDrawing();

	for (auto& i : stars)
	{
		i.update(dt);
		i.render();
	}
	ClearBackground(BLACK);

	EndDrawing();
}

void Piano::play_piano()
{

	for (int i = 0; i < key_map.size(); i++)
	{
		if (IsKeyPressed(key_map[i]))
		{
			PlaySound(sound.paino_sfx.at(i));
		}

	}



}
