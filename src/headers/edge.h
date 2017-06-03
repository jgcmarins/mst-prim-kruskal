#ifndef _EDGE_H_
#define _EDGE_H_

#include <cmath>

#include "./vertex.h"

typedef struct edge {
  float weight;
} edge;

edge new_edge(vertex v1, vertex v2);

#endif
