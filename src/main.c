#include "../include/player.h"

const int windowWidth = 800;
const int windowHeight = 800;

ball_object ball;
int main() {

  ball.Position.y = (float)800 / 2;
  ball.Position.x = (float)800 / 2;

  ball.radius = 40.0f;

  InitWindow(windowWidth, windowHeight, "raylib-ball");

  if (IsKeyDown(KEY_A)) {
    TraceLog(LOG_INFO, "KEY : A");
    ball.Position.x -= 10.0f;
  } else if (KEY_D) {
    ball.Position.y += 10.0f;
  }

  while (!WindowShouldClose()) {

    BeginDrawing();

    ClearBackground(GRAY);
    SetTargetFPS(60);
    EndDrawing();
    DrawFPS(0, 0);

    DrawCircle(ball.Position.x, ball.Position.y, ball.radius, BLACK);
  }
  CloseWindow();

  return (0);
};
