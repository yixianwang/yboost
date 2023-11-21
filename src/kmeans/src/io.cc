#include "io.h"

void ReadFile(struct Options* args,
              int* n_vals,
              double** input_vals,
              double** output_vals) {
  // open file
	std::ifstream in;
	in.open(args->in_file);

	// read num vals
	in >> *n_vals;

	// alloc input and output arrays
	*input_vals = (double*) malloc((*n_vals * args->dims) * sizeof(double));
	*output_vals = (double*) malloc((args->num_cluster * args->dims) * sizeof(double));

	// Read input vals
  int tmp;
	for (int i = 0; i < *n_vals; ++i) {
    in >> tmp;
    for (int j = 0; j < args->dims; ++j) {
      in >> (*input_vals)[i * args->dims + j];
    }
	}
}