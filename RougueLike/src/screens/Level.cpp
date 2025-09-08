#include "Level.h"

void Level::draw() {
	m_player.draw();
}

void Level::update(float deltaTime) {
	m_player.update(deltaTime);
}