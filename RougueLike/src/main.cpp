#include <iostream>
#include <raylib.h>

int main() {
	InitWindow(1280, 720, "Game");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}