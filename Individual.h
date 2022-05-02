#include <iostream>
#include <string>

#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

class Individual {
public:
  // constructor takes length and creates binaryString default = 0
  Individual(int length);
  // constructor takes binary string and creates new copy of list
  Individual(std::string inputString);

  // outputs binary string of the list
  std::string getString();

  // returns bit value at position pos. return -1 when out of bound
  int getBit(int pos);

  // takes position of certain bit and flip bit value
  void flipBit(int pos);

  // returns longest sequence of "1" in list
  int getMaxOnes();

  // returns length of list
  int getLength();

private:
  std::string binaryString;
};

#endif
