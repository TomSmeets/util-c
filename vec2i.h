#pragma once

#include "int.h"
#include "macro.h"

typedef struct _packed {
  i32 x, y;
} V2i;

STATIC_ASSERT(sizeof(V2i) == 2 * sizeof(i32));

static inline
V2i v2i(i32 x, i32 y) {
  V2i v;
  v.x = x;
  v.y = y;
  return v;
}


static inline
V2i v2i_add(V2i a, V2i b) {
  return v2i(
    a.x + b.x,
    a.y + b.y
  );
}


static inline
V2i v2i_sub(V2i a, V2i b) {
  return v2i(
    a.x - b.x,
    a.y - b.y
  );
}


static inline
i32 v2i_dot(V2i a, V2i b) {
  return a.x*b.x
       + a.y*b.y;
}
