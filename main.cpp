#include "simlib.h"
#include <iostream>

int main(int argc, char *argv[]) {
  RandomSeed(754494563);

  size_t i = 0;
  double random;
  do {
    random = Random();
    i++;
  } while (random != 1);
  std::cout << "Broken after " << i << " iterations, Random() == 1"
            << std::endl;

  return 0;
}
