#include "./headers/vertex.h"
#include "./headers/input_reader.h"

int main(int argc, char *argv[]) {
  string data = read_file("./in/data.txt");

  vector<string> all_lines = process_input(data);

  for(string s : all_lines) printf("[%s]\n", s.data());

  return 0;
}
