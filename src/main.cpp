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
  /*for(edge e : prim_mst) {
    printf("%d. ", g.vertices.at(e.src).group);
    print_edge(e);
    printf("\n");
  }
  printf("mst size: %ld | vertices size: %ld\n", prim_mst.size(), g.vertices.size());*/
  for(vertex v : g.vertices) {
    printf("%d\n", v.group);
  }

  return 0;
}
