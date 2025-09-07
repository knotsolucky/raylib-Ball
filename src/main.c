#include "../include/player.h"

const int windowWidth = 800;
const int windowHeight = 800;

ball_object ball;
int main() {

  ball.Position.y = (float)800 / 2;
  ball.Position.x = (float)800 / 2;

  ball.radius = 40.0f;

  InitWindow(windowWidth, windowHeight, "raylib-ball");
  SetTargetFPS(120);
  while (!WindowShouldClose()) {

    float speed = 200.0f; // Pixels per second

    // Get the time elapsed since the last frame
    float dt = GetFrameTime();

    // Check for key presses and move the ball
    if (IsKeyDown(KEY_W)) {
      ball.Position.y -= speed * dt;
    }
    if (IsKeyDown(KEY_S)) {
      ball.Position.y += speed * dt;
    }
    if (IsKeyDown(KEY_A)) {
      ball.Position.x -= speed * dt;
    }
    if (IsKeyDown(KEY_D)) {
      ball.Position.x += speed * dt;
    }
    BeginDrawing();

    ClearBackground(GRAY);

    EndDrawing();

    DrawFPS(0, 0);
    DrawCircle(ball.Position.x, ball.Position.y, ball.radius, BLACK);
  }

  CloseWindow();
  return (0);
};
