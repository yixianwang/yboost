#pragma once
#include "argparse.h"
#include <iostream>
#include <fstream>

void ReadFile(struct Options& args,
              int& n_vals,
              double*& input_vals,
              double*& output_vals);