#pragma once

#include <raylib.h>

#include "../entities/Player.h"

class Level {
private:
	Player m_player;
public:
	void draw();
	void update(float deltaTime);
};