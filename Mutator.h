#include "Individual.h"

#include <iostream>
#include <string>

#ifndef MUTATOR_H
#define MUTATOR_H

class Mutator {
public:
  // constructor returns offspring after mutation
  virtual void mutate(Individual* a, int k) = 0;
};

#endif
