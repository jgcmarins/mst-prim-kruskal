#include "./headers/vertex.h"
#include "./headers/input_reader.h"

int main(int argc, char *argv[]) {
  vertex v = new_vertex(5, 10, 0);
  print_vertex(v);

  string data = read_file("../in/data.txt");
  string classes = read_file("../in/classes.txt");

  printf("%s\n%s", data.data(), classes.data());

  return 0;
}
