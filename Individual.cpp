#include "Individual.h"

//constructor takes binary string and creates new copy of list
Individual::Individual(std::string inputString) {
  binaryString = inputString;
}

std::string Individual::getString() {
  return binaryString;
}

int Individual::getBit(int pos){
  if(pos<binaryString.length() && pos>0) {
    return binaryString[pos-1];
  } else {
    return -1;
  }
}

void Individual::flipBit(int pos) {
  if(binaryString[pos-1] == '1'){
    binaryString[pos-1] = '0';
  } else if(binaryString[pos-1] == '0') {
    binaryString[pos-1] = '1';
  }
}

int Individual::getMaxOnes() {
  int maxOnes = 0; //max count
  int ones = 0; //local count
  for(int i=0; i<binaryString.length(); i++) {
    if (binaryString[i] == '1') {
      ones++;
      if (ones > maxOnes) {
        maxOnes = ones;
      }
    } else {
      ones = 0;
    }
  }
  return maxOnes;
}

int Individual::getLength() {
  return binaryString.length();
}
