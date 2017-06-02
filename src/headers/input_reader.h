#ifndef _INPUTREADER_H_
#define _INPUTREADER_H_

#include <fstream>
#include <string>

using namespace std;

typedef struct input_reader {
  string filename;
  ifstream ifs;
} input_reader;

input_reader new_input_reader(string filename);

string read_file(input_reader ir);

#endif
