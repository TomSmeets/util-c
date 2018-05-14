#include "vec.h"
#include <math.h>
#include <stdio.h>

int main(void){
  V2 a = v2(1, 2);
  V2 b = v2(3, 4);
  V2 c = v2_add(a, b);
  printf("%f,%f + %f,%f = %f,%f\n", a.x, a.y, b.x, b.y, c.x, c.y);
  return v2_dot(c, c);
}
