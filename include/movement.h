#include "raylib.h"
#include <stdio.h>

#define MOVEMENT_H
#ifdef MOVEMENT_H

typedef struct ballProperty {
  float x;
  float y;
  float radius;
  float speed_x;
  float speed_y;
  Vector2 defaultPosition;
} ballProperty;

#endif // MOVEMENT_H
