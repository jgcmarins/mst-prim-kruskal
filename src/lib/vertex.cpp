#include "../headers/vertex.h"

vertex new_vertex(float x, float y) {
  vertex v;
  v.group = 0;
  v.x = x;
  v.y = y;
  v.visited = false;
  return v;
}

void print_vertex(vertex v) {
  printf("%d. (%.2f, %.2f)", v.group, v.x, v.y);
}
