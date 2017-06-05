#include "./headers/input_reader.h"
#include "./headers/mst.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data2.txt");
  vector<string> all_lines = process_input(data, "\r\n");
  vector<vertex> vertices = process_lines(all_lines);

  graph g = new_graph(vertices.size(), vertices.size(), vertices);
  vector<edge> prim_mst = prim(g, &g.vertices);
  for(edge e : prim_mst) {
    printf("%d. ", g.vertices.at(e.src).group);
    print_edge(e);
    printf("\n");
  }
  printf("mst size: %ld | vertices size: %ld\n", prim_mst.size(), g.vertices.size());

  return 0;
}
