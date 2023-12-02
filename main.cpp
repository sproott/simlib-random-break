#include "simlib.h"
#include <iostream>

int main(int argc, char *argv[]) {
  long seed = 754494563L;

  std::cout << "Starting with seed: " << seed << std::endl;

  RandomSeed(seed);

  size_t i = 0;
  double random;
  long currentSeed = seed;
  for (;;) {
    random = Random();

    if (random == 1) {
      break;
    }
    currentSeed *= 1220703125L; // MULCONST
    currentSeed &= 2147483647L; // MAXLONGINT
    i++;
  }

  std::cout << "Broken after " << i << " iterations, Random() == 1"
            << std::endl;

  std::cout << "Last working seed: " << currentSeed << std::endl;

  return 0;
}
