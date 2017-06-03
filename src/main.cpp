#include "./headers/input_reader.h"
#include "./headers/vertex.h"
#include "./headers/edge.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data.txt");

  vector<string> all_lines = process_input(data, "\r\n");

  //for(string s : all_lines) printf("[%s]\n", s.data());

  vector<vertex> vertices = process_lines(all_lines);
  for(vertex v : vertices) print_vertex(v);
  printf("%ld", vertices.size());

  printf("vertex 1: ");
  print_vertex(vertices.at(0));

  printf("vertex 2: ");
  print_vertex(vertices.at(1));

  edge e = new_edge(vertices.at(0), vertices.at(1));
  printf("euclidean distance: %f\n", e.weight);

  return 0;
}
