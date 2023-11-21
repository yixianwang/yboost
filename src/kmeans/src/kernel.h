#pragma once
#include "argparse.h"
#include <chrono>

struct Result {
  int iter_to_converge;
  std::chrono::duration<double, std::milli> diff;
};