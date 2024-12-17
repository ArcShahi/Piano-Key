#pragma once


#include <raylib.h>
#include <vector>
#include <random>

constexpr int width = 1200;
constexpr int height = 900;


inline std::random_device rd{};
inline std::seed_seq ss{ rd(),rd(),rd(),rd(),rd(),rd(),rd() };
inline std::mt19937 mt{ ss };

namespace xe
{
	double randomd(double min, double max);
}

double map(double value, double in_min, double in_max, double out_min, double out_max);


class Star
{
public:
	Star()
		:x{ xe::randomd(-width / 2, width / 2) }, y{ xe::randomd(-height / 2, height / 2) },
		z{ xe::randomd(0.0,width) }, pz{ z }
	{}

public:

	void update(float dt);
	void render();
	

public:
	double x{};
	double y{};
	double z{};

	double pz{};


private:
	double speed{ 300 };
};