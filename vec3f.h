#pragma once

#include "macro.h"


typedef struct _packed {
  float x, y, z;
} V3;

STATIC_ASSERT(sizeof(V3) == 3 * sizeof(float));

static inline
V3 v3(float x, float y, float z) {
  V3 v;
  v.x = x;
  v.y = y;
  v.z = z;
  return v;
}

static inline
V3 v3_add(V3 a, V3 b) {
  return v3(
    a.x + b.x,
    a.y + b.y,
    a.z + b.z
  );
}

static inline
V3 v3_sub(V3 a, V3 b) {
  return v3(
    a.x - b.x,
    a.y - b.y,
    a.z - b.z
  );
}

static inline
float v3_dot(V3 a, V3 b) {
  return a.x*b.x
       + a.y*b.y
       + a.z*b.z;
}

static inline
V3 v3_mul(V3 a, float b) {
  return v3(
    a.x * b,
    a.y * b,
    a.z * b
  );
}
