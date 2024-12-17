#ifndef SFX_HPP
#define SFX_HPP

#include "raylib.h"
#include <filesystem>
#include <algorithm>
#include <ranges>
#include <vector>


namespace fs = std::filesystem;


class Sfx
{
public:
	Sfx();
	~Sfx();

public:
	std::vector<Sound> paino_sfx{};


private:
	void load_sfx();
	void unload_sfx();
};



#endif // !SFX_HPP