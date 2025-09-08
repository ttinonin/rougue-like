#include "Player.h"

#include <raymath.h>

Player::Player() {
	m_rect = { 20.0f, 20.0f, 16.0f, 21.0f };
	m_direction = { 0.0f, 0.0f };
	m_speed = 200.0f;
}

void Player::draw() {
    DrawRectangleRec(m_rect, BLUE);
}

void Player::update(float deltaTime) {
	move(deltaTime);
	input();
}

void Player::input() {
    if (IsKeyDown(KEY_D)) {
        m_direction.x = 1.0f;
    }
    else if (IsKeyDown(KEY_A)) {
        m_direction.x = -1.0f;
    }
    else {
        m_direction.x = 0.0f;
    }

    if (IsKeyDown(KEY_W)) {
        m_direction.y = -1.0f;
    }
    else if (IsKeyDown(KEY_S)) {
        m_direction.y = 1.0f;
    }
    else {
        m_direction.y = 0.0f;
    }
}

void Player::move(float deltaTime) {
    if (Vector2Length(m_direction) != 0.0f) {
        m_direction = Vector2Normalize(m_direction);
    }

    m_rect.x += m_direction.x * deltaTime * m_speed;
    m_rect.y += m_direction.y * deltaTime * m_speed;
}