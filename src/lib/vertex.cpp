#include "../headers/vertex.h"

vertex new_vertex(float x, float y, int group) {
  vertex v;
  v.group = group;
  v.x = x;
  v.y = y;
  v.visited = false;
  return v;
}

void print_vertex(vertex v) {
  printf("(%.2f, %.2f)", v.x, v.y);
}
