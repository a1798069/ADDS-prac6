#include "BitFlipProb.h"
#include "Individual.h"

void BitFlipProb::mutate(Individual* a, int k) {
  k = a->getLength();

  for(int i=0; i< a->getLength(); i++) {
    double j = rand() % 1;

    if (j>0 && j<1/k) {
      a->flipBit(j);
    }
  }
}
