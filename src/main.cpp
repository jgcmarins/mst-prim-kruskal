#include "./headers/input_reader.h"
#include "./headers/mst.h"

int main(int argc, char *argv[]) {

  if(argc != 2) {
    printf("Usage: %s #k, where k is an integer.\n", argv[0]);
    exit(0);
  }
  int k = atoi(argv[1]);

  string data = read_file("./in/data.txt");
  vector<string> all_lines = process_input(data, "\r\n");
  vector<vertex> vertices = process_lines(all_lines);

  graph g = new_graph(vertices.size(), vertices.size(), vertices);
  vector<edge> prim_mst = prim(g);
  create_group(&g.vertices, prim_mst, k);

  vector<vertex> v1;
  vector<vertex> v2;
  vector<vertex> v3;
  vector<vertex> v4;
  vector<vertex> v5;
  vector<vertex> v6;
  vector<vertex> v7;
  vector<vertex> v8;
  for(vertex v : g.vertices) {
    if(v.group == 1) v1.push_back(v);
    else if(v.group == 2) v2.push_back(v);
    else if(v.group == 3) v3.push_back(v);
    else if(v.group == 4) v4.push_back(v);
    else if(v.group == 5) v5.push_back(v);
    else if(v.group == 6) v6.push_back(v);
    else if(v.group == 7) v7.push_back(v);
    else if(v.group == 8) v8.push_back(v);
  }

  for(vertex v : v1) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v2) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v3) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v4) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v5) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v6) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v7) {
    printf("%.2f %.2f\n", v.x, v.y);
  }
  for(vertex v : v8) {
    printf("%.2f %.2f\n", v.x, v.y);
  }

  return 0;
}
