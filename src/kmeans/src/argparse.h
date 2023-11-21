#pragma once
#include <getopt.h>
#include <stdlib.h>
#include <iostream>

struct Options {
  int num_cluster;
  int dims;
  char* in_file;
  int max_num_iter;
  double threshold;
  bool c;
  int seed;
  int implementation;
};

void GetOpts(int, char**, Options*);
