#include "Mutator.h"

#ifndef BITFLIP_H
#define BITFLIP_H

class BitFlip : public Mutator {
public:
  void mutate(Individual* a,int k);
};

#endif
