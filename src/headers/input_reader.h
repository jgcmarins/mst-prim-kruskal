#ifndef _INPUTREADER_H_
#define _INPUTREADER_H_

#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

string read_file(string filename);

vector<string> process_input(string input);

#endif
