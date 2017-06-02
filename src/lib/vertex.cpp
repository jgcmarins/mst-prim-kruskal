#include "../headers/vertex.h"

vertex new_vertex(float x, float y, int group) {
  vertex v;
  v.group = group;
  v.x = x;
  v.y = y;
  return v;
}

void print_vertex(vertex v) {
  printf("(%f, %f)\n", v.x, v.y);
}
