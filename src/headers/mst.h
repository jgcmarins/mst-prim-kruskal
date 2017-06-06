#ifndef _MST_H_
#define _MST_H_

#include <algorithm>

#include "./graph.h"

using namespace std;

vector<edge> prim(graph g);

vector<edge> kruskal(graph g, vector<vertex> *vertices, int k);

void create_group(vector<vertex> *vertices, vector<edge> prim_mst, int k);

#endif
