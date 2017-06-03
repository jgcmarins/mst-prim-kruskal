#include "./headers/input_reader.h"
#include "./headers/vertex.h"
#include "./headers/edge.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data.txt");

  vector<string> all_lines = process_input(data, "\r\n");

  vector<vertex> vertices = process_lines(all_lines);

  printf("vertex 0: ");
  print_vertex(vertices.at(0));

  printf("vertex 1: ");
  print_vertex(vertices.at(1));

  edge e = new_edge(vertices.at(0), vertices.at(1), 0, 1);
  printf("euclidean distance between vertices %d and %d: %f\n", e.pos1, e.pos2, e.weight);

  return 0;
}
