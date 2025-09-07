#include "../include/player.h"
#include "../include/raylib.h"
#include <stdbool.h>

const int screenWidth = 800;
const int ScreenHeight = 450;

int main() {

  ballProperty ball;
  Rectangle myRectangle = {301.0f, 300.0f, 30.0f, 30.0f};

  ball.position_x = (float)screenWidth / 2;
  ball.position_y = (float)ScreenHeight / 2;
  ball.radius = 60.0f;
  ball.speed_x = 100.0f;
  ball.speed_y = 100.0f;

  InitWindow(screenWidth, ScreenHeight, "Raylib-game");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    BeginDrawing();

    ball.velocity.x = 0.0;

    if (IsKeyDown(KEY_A)) {
      TraceLog(LOG_INFO, "A KEY WAS BEEN PRESSED");
      ball.velocity.x -= 5;
    } else if (IsKeyDown(KEY_D)) {
      TraceLog(LOG_INFO, "D KEY HAS BEEN  PRESSED");
      ball.velocity.x -= 5;
    } else if (IsKeyDown(KEY_W)) {
      TraceLog(LOG_INFO, "W KEY HAS BEEN PRESSED");
      ball.position_y -= 10;
    } else if (IsKeyDown(KEY_S)) {
      TraceLog(LOG_INFO, "S KEY HAS BEEN PRESSED");
      ball.position_y += 10;
    }

    ClearBackground(BLACK);
    EndDrawing();
    DrawFPS(0, 0);

    DrawCircleV((Vector2){ball.position_x, ball.position_y}, ball.radius, RED);
    DrawRectangleRec(myRectangle, PURPLE);
  }
  CloseWindow();

  return 0;
}
