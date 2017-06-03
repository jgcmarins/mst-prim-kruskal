#include "./headers/input_reader.h"
#include "./headers/graph.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data.txt");

  vector<string> all_lines = process_input(data, "\r\n");

  vector<vertex> vertices = process_lines(all_lines);

  printf("vertex 200: ");
  print_vertex(vertices.at(200));

  printf("vertex 400: ");
  print_vertex(vertices.at(400));

  edge e = new_edge(vertices.at(200), vertices.at(400), 200, 400);
  printf("euclidean distance between vertices %d and %d: %f\n", e.pos1, e.pos2, e.weight);

  graph g = new_graph(vertices.size(), vertices.size(), vertices);

  edge test = g.edges.at(200).at(400);
  printf("euclidean distance between test vertices %d and %d: %f\n", test.pos1, test.pos2, test.weight);
  printf("vertices: %ld\nedges: %ld\n", g.vertices.size(), (g.edges.size() * g.edges.at(g.edges.size() - 1).size()));

  return 0;
}
