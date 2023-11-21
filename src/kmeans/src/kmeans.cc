#include <iostream>
#include "argparse.h"
#include "io.h"
#include "kernel.h"

int main(int argc, char** argv) {
  // parse args
  struct Options opts;
  GetOpts(argc, argv, &opts);

  // declare input and output into 1d array
  int n_vals;
  double* input_vals;
  double* centroids;

  // read input data
  ReadFile(opts, n_vals, input_vals, centroids);

  int* cluster_of_point;
  cluster_of_point = (int*) malloc(n_vals * sizeof(int));

  Result result;
  static auto start = std::chrono::high_resolution_clock::now();
  if (opts.implementation == 3) { // sequential
	  // result = sequential_kmeans(input_vals, centroids, cluster_of_point, n_vals, opts.num_cluster, opts.dims, opts.max_num_iter, opts.threshold);
    for (int i = 0; i < n_vals * opts.dims; ++i) {
      std::cout << input_vals[i] << " ";
    }
    std::cout << std::endl;
  }

  static auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> total_global_diff = end - start;
}