#include "raylib.h"
#include <stdbool.h>

#define PLAYER_H
#ifdef PLAYER_H

typedef struct ball_object {

  /* Ball Properties */
  float radius;

  Vector2 Position;
  Vector2 velocity;

} ball_object;

#endif // PLAYER_H
