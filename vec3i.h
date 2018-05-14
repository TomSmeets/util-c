#pragma once

#include "int.h"
#include "macro.h"

typedef struct _packed {
  i32 x, y, z;
} V3i;

STATIC_ASSERT(sizeof(V3i) == 3 * sizeof(i32));

static inline
V3i v3i(i32 x, i32 y, i32 z) {
  V3i v;
  v.x = x;
  v.y = y;
  v.z = z;
  return v;
}

static inline
V3i v3i_add(V3i a, V3i b) {
  return v3i(
    a.x + b.x,
    a.y + b.y,
    a.z + b.z
  );
}

static inline
V3i v3i_sub(V3i a, V3i b) {
  return v3i(
    a.x - b.x,
    a.y - b.y,
    a.z - b.z
  );
}

static inline
i32 v3i_dot(V3i a, V3i b) {
  return a.x*b.x
       + a.y*b.y
       + a.z*b.z;
}
