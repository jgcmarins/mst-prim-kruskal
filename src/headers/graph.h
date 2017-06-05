#ifndef _GRAPH_H_
#define _GRAPH_H_

#include <functional>
#include <queue>

#include "./edge.h"

using namespace std;

typedef struct graph {
  int m;
  int n;
  vector<vertex> vertices;
  vector<vector<edge>> edges;
} graph;

graph new_graph(int m, int n, vector<vertex> vertices);

vector<edge> get_vector(graph g);

void print_graph(graph g);

#endif
