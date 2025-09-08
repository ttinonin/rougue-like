#pragma once

#include "screens/Level.h"

class Game {
private:
	Level m_level;
public:
	Game();
	~Game();

	void run();
};