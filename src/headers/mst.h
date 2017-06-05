#ifndef _MST_H_
#define _MST_H_

#include <algorithm>

#include "./graph.h"

using namespace std;

bool cmp_v(edge e1, edge e2);

vector<edge> prim(graph g);

#endif
