#include "../headers/graph.h"

graph new_graph(int m, int n, vector<vertex> vertices) {
  graph g;

  g.m = m;
  g.n = n;

  g.vertices = vertices;

  for(int i = 0 ; i < g.m ; i++) {
    vector<edge> row;
    for(int j = 0 ; j < g.n ; j++) {
      row.push_back(new_edge(vertices.at(i), vertices.at(j), i, j));
    }
    g.edges.push_back(row);
  }

  return g;
}

vector<edge> get_vector(graph g) {
  vector<edge> v;
  for(vector<edge> row : g.edges) {
    for(edge col : row) {
      if(col.src < col.des) v.push_back(col);
    }
  }
  return v;
}

void print_graph(graph g) {
  vector<vertex> row = g.vertices;
  printf("               ");
  for(vertex v : row) {
    print_vertex(v);
    printf(" ");
  }
  printf("\n");
  for(unsigned int i = 0 ; i < row.size() ; i++) {
    print_vertex(row.at(i));
    printf(" ");
    for(unsigned int j = 0 ; j < row.size() ; j++) {
      print_edge(g.edges.at(i).at(j));
      printf(" |");
    }
    printf("\n");
  }
}
