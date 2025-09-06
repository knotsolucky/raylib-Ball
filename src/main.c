#include "../include/movement.h"
#include "../include/raylib.h"
#include <stdio.h>

const int screenWidth = 800;
const int ScreenHeight = 400;

int main() {
  ballProperty ball;

  ball.x = (float)screenWidth / 2;
  ball.y = (float)ScreenHeight / 2;
  ball.radius = 30.0f;
  ball.speed_x = 100.0f;
  ball.speed_y = 100.0f;

  InitWindow(screenWidth, ScreenHeight, "Raylib-game");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();

    // ball.x += ball.speed_x;

    if (IsKeyDown(KEY_W)) {
      TraceLog(LOG_INFO, "W KEY WAS PRESSED");
    }

    DrawCircle((int)ball.x, (int)ball.x, ball.radius, BLUE);
    EndDrawing();
  }
  CloseWindow();
}
