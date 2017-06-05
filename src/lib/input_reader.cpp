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

vector<string> process_input(string input, const char *delim) {
  char *str = new char[input.length() + 1];
  strcpy(str, input.c_str());
  vector<string> all;
  char *token = strtok(str, delim);
  while(token != NULL) {
    all.push_back(string(token));
    token = strtok(NULL, delim);
  }
  delete [] str;
  return all;
}

vector<vertex> process_lines(vector<string> all_lines) {
  vector<vertex> vertices;
  for(string s : all_lines) {
    vector<string> line = process_input(s, "\t");
    string::size_type sz;
    vertex v = new_vertex(stof(line.at(0).c_str(), &sz), stof(line.at(1).c_str(), &sz));
    vertices.push_back(v);
  }
  return vertices;
}
