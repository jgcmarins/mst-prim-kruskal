#ifndef _INPUTREADER_H_
#define _INPUTREADER_H_

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <fstream>

#include "vertex.h"

using namespace std;

string read_file(string filename);

vector<string> process_input(string input, const char *delim);

vector<vertex> process_lines(vector<string> all_lines);

#endif
