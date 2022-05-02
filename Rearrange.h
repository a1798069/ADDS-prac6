#include "Mutator.h"

#ifndef REARRANGE_H
#define REARRANGE_H

class Rearrange : public Mutator {
public:
  void mutate(Individual* a,int k);
};

#endif
