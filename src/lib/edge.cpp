#include "../headers/edge.h"

edge new_edge(vertex v1, vertex v2, int src, int des) {
  edge e;
  float x = ((v1.x - v2.x) * (v1.x - v2.x));
  float y = ((v1.y - v2.y) * (v1.y - v2.y));
  float xy = x + y;
  e.weight = sqrt(xy);
  e.src = src;
  e.des = des;
  e.removed = false;
  return e;
}

void print_edge(edge e) {
  printf("%d->%d : %.4f | %d", e.src, e.des, e.weight, e.removed);
}
