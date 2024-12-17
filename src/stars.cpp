


#include "stars.hpp"


void Star::render()
{

		float sx = (float)map(x / z, 0.0, 1.0, 0.0, width) + width / 2; // Center horizontally
		float sy = (float)map(y / z, 0.0, 1.0, 0.0, height) + height / 2; // Center vertically

		float r = (float)map(z, 0.0, width, 3, 0);
		DrawCircle((int)sx, sy, r, WHITE);

		double px = map(x / pz, 0.0, 1.0, 0.0, width) + width / 2;
		double py = map(y / pz, 0.0, 1.0, 0.0, height) + height / 2;

		pz = z;

		DrawLine(px, (int)py, (int)sx, sy, BLUE);

}

void Star::update(float dt)
{
	speed = map(GetMousePosition().x, 0.0, width, 50.0, 1200);
	z -= speed * dt; // Moving towards the viewer

	if (z < 1)
	{
		// If the star is too close, reset its position
		x = xe::randomd(static_cast<double>(-width) / 2, width / 2);
		y = xe::randomd(static_cast<double>(-height) / 2, height / 2);
		z = double(width);
	}
}

double xe::randomd(double min, double max)
{
	std::uniform_real_distribution<double> range(min, max);
	return range(mt);
}

double map(double value, double in_min, double in_max, double out_min, double out_max)
{
	return (value - in_min) / (in_max - in_min) * (out_max - out_min) + out_min;
}
