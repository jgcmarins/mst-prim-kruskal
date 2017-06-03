#include "./headers/vertex.h"
#include "./headers/input_reader.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data.txt");

  vector<string> all_lines = process_input(data, "\r\n");

  //for(string s : all_lines) printf("[%s]\n", s.data());

  vector<vertex> vertices = process_lines(all_lines);
  for(vertex v : vertices) print_vertex(v);
  printf("%ld", vertices.size());

  return 0;
}
