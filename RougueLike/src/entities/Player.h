#pragma once

#include <raylib.h>

class Player {
private:
	Rectangle m_rect;
	Vector2 m_direction;
	float m_speed;
public:
	Player();

	void draw();
	void update(float deltaTime);
private:
	void input();
	void move(float deltaTime);
};