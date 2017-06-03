#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "./edge.h"

using namespace std;

typedef struct graph {
  int m;
  int n;
  vector<vector<edge>> matrix;
} graph;

graph new_graph(int m, int n, vector<vertex> vertices);

#endif
