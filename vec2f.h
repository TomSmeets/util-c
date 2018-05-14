#pragma once

#include "macro.h"


typedef struct _packed {
  float x, y;
} V2;

STATIC_ASSERT(sizeof(V2) == 2 * sizeof(float));

static inline
V2 v2(float x, float y) {
  V2 v;
  v.x = x;
  v.y = y;
  return v;
}


static inline
V2 v2_add(V2 a, V2 b) {
  return v2(
    a.x + b.x,
    a.y + b.y
  );
}


static inline
V2 v2_sub(V2 a, V2 b) {
  return v2(
    a.x - b.x,
    a.y - b.y
  );
}


static inline
float v2_dot(V2 a, V2 b) {
  return a.x*b.x
       + a.y*b.y;
}


static inline
V2 v2_mul(V2 a, float b) {
  return v2(
    a.x * b,
    a.y * b
  );
}
