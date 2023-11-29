#include "argparse.h"

void GetOpts(int argc, char** argv, Options* opts) {
  if (argc == 1) {
    std::cout << "Usage:" << std::endl;
    std::cout << "\t--num_cluster or -k <num_cluster>" << std::endl;
    std::cout << "\t--dims or -d <dims>" << std::endl;
    std::cout << "\t--in_file or -i <file_path>" << std::endl;
    std::cout << "\t--max_num_iter or -m <max_num_iter>" << std::endl;
    std::cout << "\t--threshold or -t <threshold>" << std::endl;
    std::cout << "\t--seed or -s <seed>" << std::endl;
    std::cout << "\t--implementation or -p <implementation>" << std::endl;
    std::cout << "\t[Optional] --c or -c" << std::endl;
    exit(0);
  }

  opts->c = false;

  struct option l_opts[] = {
    {"num_cluster", required_argument, NULL, 'k'},
    {"dims", required_argument, NULL, 'd'},
    {"in", required_argument, NULL, 'i'},
    {"max_num_iter", required_argument, NULL, 'm'},
    {"threshold", required_argument, NULL, 't'},
    {"seed", required_argument, NULL, 's'},
    {"implementation", required_argument, NULL, 'p'},
    {"c", no_argument, NULL, 'c'}
  };

  int ind, cc;
  while ((cc = getopt_long(argc, argv, "k:d:i:m:t:s:p:c", l_opts, &ind)) != -1) {
    switch (cc) {
      case 0:
        break;
      case 'k':
        opts->num_cluster = atoi((char *)optarg);
        break;
      case 'd':
        opts->dims = atoi((char *)optarg);
        break;
      case 'i':
        opts->in_file = (char *)optarg;
        break;
      case 'm':
        opts->max_num_iter = atoi((char *)optarg);
        break;
      case 't':
        opts->threshold = atof((char *)optarg);
        break;
      case 's':
        opts->seed = atoi((char *)optarg);
        break;
      case 'p':
        opts->implementation = atoi((char *)optarg);
        break;
      case 'c':
        opts->c = true;
        break;
      case ':':
        std::cerr << argv[0] << ": option -" << (char)optopt << "requires an \
        argument." << std::endl;
        exit(1);
    }
  }
}