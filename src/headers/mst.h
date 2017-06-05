#ifndef _MST_H_
#define _MST_H_

#include <algorithm>

#include "./graph.h"

using namespace std;

vector<edge> prim(graph g);

void create_group(vector<vertex> *vertices, vector<edge> prim_mst, int k);

#endif
