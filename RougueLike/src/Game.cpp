#include "Game.h"

#include <raylib.h>

Game::Game() {
	InitWindow(1280, 720, "Game");
}

Game::~Game() {
	CloseWindow();
}

void Game::run() {
	while (!WindowShouldClose()) {
		float deltaTime = GetFrameTime();
		
		m_level.update(deltaTime);

		BeginDrawing();
		ClearBackground(BLACK);

		m_level.draw();

		EndDrawing();
	}
}