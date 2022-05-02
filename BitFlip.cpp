#include "BitFlip.h"
#include "Individual.h"

void BitFlip::mutate(Individual* a, int k) {
  while(k > a->getLength()) {
    k = k- a->getLength();
  }
  if(k > a->getLength()) {
    a->flipBit(k - a->getLength());
  } else {
    a->flipBit(k);
  }
}
