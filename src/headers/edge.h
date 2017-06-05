#ifndef _EDGE_H_
#define _EDGE_H_

#include <cmath>

#include "./vertex.h"

typedef struct edge {
  int src;
  int des;
  float weight;
  bool removed;
} edge;

edge new_edge(vertex v1, vertex v2, int src, int des);

void print_edge(edge e);

#endif
