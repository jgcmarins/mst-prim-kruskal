#include "./headers/vertex.h"
#include "./headers/input_reader.h"

int main(int argc, char *argv[]) {
  vertex v = new_vertex(5, 10);
  print_vertex(v);

  return 0;
}
