#ifndef _VERTEX_H_
#define _VERTEX_H_

#include <cstdio>

typedef struct vertex {
  int group;
  float x;
  float y;
} vertex;

vertex new_vertex(float x, float y, int group);

void print_vertex(vertex v);

#endif
