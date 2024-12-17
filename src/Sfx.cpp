#include "Sfx.hpp"

Sfx::Sfx()
{
	InitAudioDevice();
	load_sfx();
}

Sfx::~Sfx()
{
	unload_sfx();
}

void Sfx::load_sfx()
{

	fs::path asset_path{ R"(assets/sfx)" };

	fs::directory_iterator sfx_itr{ asset_path };

	// Loads Entire Directory
	for (const auto& itr : sfx_itr)
	{
		auto file_path = itr.path().string();
		Sound sound = LoadSound(file_path.c_str());
		paino_sfx.push_back(sound);
	}



}

void Sfx::unload_sfx()
{

	for (auto& s : paino_sfx)
	{
		UnloadSound(s);
	}
	CloseAudioDevice();
}
