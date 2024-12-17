#include "raylib.h"
#include "Sfx.hpp"

#include "stars.hpp"


class Piano
{
public:
	Piano();
	~Piano();

public:

	void init();

private:

	void render();
	void play_piano();


private:
	std::vector<Star> stars{};

private:

	Sfx sound{};

	std::vector<KeyboardKey> key_map
	{ KEY_ESCAPE, KEY_ONE, KEY_TWO, KEY_THREE, KEY_FOUR, KEY_FIVE,KEY_SIX, KEY_SEVEN,KEY_EIGHT,
		KEY_NINE, KEY_ZERO,KEY_BACKSPACE,KEY_TAB,KEY_Q,KEY_W,KEY_E,
		KEY_R,KEY_T,KEY_Y,KEY_U,KEY_I,KEY_O,KEY_P,KEY_A,KEY_S,KEY_D,KEY_F,KEY_G,KEY_H,KEY_J,KEY_K,
		KEY_L,KEY_SEMICOLON,KEY_ENTER,KEY_CAPS_LOCK,KEY_Z,KEY_X,KEY_C,KEY_V,KEY_B,KEY_N,KEY_M,
		KEY_COMMA,KEY_PERIOD,KEY_SLASH,KEY_RIGHT_SHIFT,KEY_LEFT_CONTROL,KEY_SPACE
	};



};

