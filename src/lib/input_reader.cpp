#include "../headers/input_reader.h"

string read_file(string filename) {
  string buffer;
  ifstream ifs(filename, fstream::in);
  if(!ifs.is_open()) {
    printf("Error opening file!");
    exit(1);
  } else {
    char c;
    while(ifs.get(c)) buffer.push_back(c);
    ifs.close();
  }
  return buffer;
}

vector<string> process_input(string input) {
  char *str = new char[input.length() + 1];
  strcpy(str, input.c_str());
  vector<string> all_lines;
  char *token = strtok(str, "\r\n");
  while(token != NULL) {
    all_lines.push_back(string(token));
    token = strtok(NULL, "\r\n");
  }
  delete [] str;
  return all_lines;
}
