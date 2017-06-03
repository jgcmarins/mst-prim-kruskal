#ifndef _EDGE_H_
#define _EDGE_H_

#include <cmath>

#include "./vertex.h"

typedef struct edge {
  int pos1;
  int pos2;
  float weight;
} edge;

edge new_edge(vertex v1, vertex v2, int pos1, int pos2);

#endif
