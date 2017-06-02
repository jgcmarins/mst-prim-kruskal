#ifndef _VERTEX_H_
#define _VERTEX_H_

#include <cstdio>

using namespace std;

typedef struct vertex {
  float x;
  float y;
} vertex;

vertex new_vertex(float x, float y);

void print_vertex(vertex v);

#endif
