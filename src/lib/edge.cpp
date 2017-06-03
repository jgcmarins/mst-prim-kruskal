#include "../headers/edge.h"

edge new_edge(vertex v1, vertex v2, int pos1, int pos2) {
  edge e;
  float x = ((v1.x - v2.x) * (v1.x - v2.x));
  float y = ((v1.y - v2.y) * (v1.y - v2.y));
  float xy = x + y;
  e.weight = sqrt(xy);
  e.pos1 = pos1;
  e.pos2 = pos2;
  return e;
}
