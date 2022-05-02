#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>
#include <string>

Individual * execute(Individual* indPtr, Mutator* mPtr, int k) {
  mPtr->mutate(indPtr,k);
  return indPtr;
}

int main() {

  std::string binarystr1;
  std::cin>> binarystr1;
  int k1;
  std::cin>> k1;

  std::string binarystr2;
  std::cin>> binarystr2;
  int k2;
  std::cin>> k2;

  BitFlip A;
	Rearrange B;
	Individual C(binarystr1);
	Individual D(binarystr2);

	Individual *CC=execute(&C,&A,k1);
	Individual *DD=execute(&D,&B,k2);
	std::cout<<CC->getString()<<" "<<DD->getString()<<" "<<DD->getMaxOnes();
}
