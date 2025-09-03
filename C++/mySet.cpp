#include <iostream>
#include "mySet.h"

//Constructors:
mySet::mySet(unsigned int theRange) { //User-defined
  range = theRange + 1; //Add 1 to include the fed number itself as well as 0.
  set = new bool[range];
  for (int i = 0; i < range; i++) { //Set all elements of the set to false.
    set[i] = false;
  }
  size = 0;
}

mySet::mySet(const mySet& set1) { //Copy
  range = set1.range;
  set = set1.set;
  size = set1.size;
}

mySet::~mySet() { //Destructor
  //Intentionally left empty to just delete.
}

//Member Functions:
void mySet::insertElement(int k) {
  if (k >= 0 && k < range) { //If within the range, toggle the given index to true.
    set[k] = true;
    size++;
  }
  else {  //Otherwise, print an error message.
    std::cout << "Invalid insert: " << k << " is not within range." << std::endl;
  }
}

void mySet::deleteElement(int m) {
  if (m >= 0 && m <= range) { //If within the range, toggle the given index to false.
    set[m] = false;
    size--;
  }
  else {  //Otherwise, print an error message.
    std::cout << "Invalid delete: " << m << " is not within range." << std::endl;
  }
}

void mySet::printSet() {
  std::cout << "{ ";
  bool exists = false;  //This will trigger the empty print if necessary.
  for (int i = 0; i < range; i++) {
    if (set[i] == true) {
      std::cout << i << " ";
      exists = true;  //Toggle exists to true.
    }
  }
  if (exists == false) {  //Print three dashed lines to represent an empty set if the exists variable was never toggled.
    std::cout << "--- ";
  }
  std::cout << "}" << std::endl;
}

bool mySet::isEqualTo(const mySet& other) const {
  if (range != other.range) { //End right away with false if the ranges aren't equal.
    return false;
  }
  for (int i = 0; i < range; i++) {  //Otherwise, start checking each index.
    if (set[i] != other.set[i]) { //End function with false if there's any instances of the boolean values at index aren't the same.
      return false;
    }
  }
  return true;  //Catch-all return is true.
}

int mySet::countPrimeNumbers() const {
  int numOfPrime = 0;
  bool flag = true; //Flag starts as true for each iteration.
  for (int i = 2; i < range; i++) {  //0 and 1 aren't prime, so start at 2.
    if (set[i] == 1) {
      for (int j = 2; j < i; j++) {  //2 is the first number to divide by when testing for primeness.
        if (i % j == 0) { //Toggle flag to false for this iteration of the master loop if the number is divisible by any value used.
          flag = false;
        }
      }
      if (flag == true) {
        numOfPrime++;
      }
    }
    flag = true;
  }
  return numOfPrime;
}