#include "Mutator.h"

#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

class BitFlipProb : public Mutator {
public:
  void mutate(Individual* a,int k);
};

#endif
