#include "raylib.h"
#include <stdbool.h>

#define MOVEMENT_H
#ifdef MOVEMENT_H

typedef struct ballProperty {
  /* Position of the ball */
  float position_x;
  float position_y;

  /* Size of Ball */
  float radius;

  /* The speed of the ball */
  float speed_x;
  float speed_y;

  Vector2 velocity;

} ballProperty;

void move_player();

#endif // MOVEMENT_H
