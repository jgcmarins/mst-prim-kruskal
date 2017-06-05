#include "./headers/input_reader.h"
#include "./headers/mst.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data2.txt");
  vector<string> all_lines = process_input(data, "\r\n");
  vector<vertex> vertices = process_lines(all_lines);

  /*printf("vertex 200: ");
  print_vertex(vertices.at(200));

  printf("vertex 400: ");
  print_vertex(vertices.at(400));

  edge e = new_edge(vertices.at(200), vertices.at(400), 200, 400);
  printf("euclidean distance between vertices %d and %d: %f\n", e.src, e.des, e.weight);*/

  graph g = new_graph(vertices.size(), vertices.size(), vertices);
  print_graph(g);
  vector<edge> prim_mst = prim(g);
  for(edge e : prim_mst) {
    print_edge(e);
    printf("\n");
  }
  printf("mst size: %ld | vertices size: %ld\n", prim_mst.size(), g.vertices.size());

  /*edge test = g.edges.at(200).at(400);
  printf("euclidean distance between test vertices %d and %d: %f\n", test.src, test.des, test.weight);
  printf("vertices: %ld\nedges: %ld\n", g.vertices.size(), (g.edges.size() * g.edges.at(g.edges.size() - 1).size()));*/

  //vector<edge> edges = get_vector(g);
  //printf("edge vector size: %ld\n", edges.size());

  /*auto cmp = [](edge left, edge right) { return (left.weight) > (right.weight); };
  priority_queue<edge, vector<edge>, decltype(cmp)> pq(cmp);
  for(edge e : edges) pq.push(e);*/
  /*printf("pq size: %ld\n", pq.size());
  printf("pq top: %f\n", pq.top().weight);*/

  return 0;
}
