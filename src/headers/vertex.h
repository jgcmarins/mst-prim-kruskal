#ifndef _VERTEX_H_
#define _VERTEX_H_

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <vector>

typedef struct vertex {
  int group;
  float x;
  float y;
  bool visited;
} vertex;

vertex new_vertex(float x, float y, int group);

void print_vertex(vertex v);

#endif
