#include <iostream>
#include "mySet.h"
using namespace std;

int main() {
  //Make set1 with range 0 to 20.
  mySet set1 = mySet(20);

  //Insert elements 13, 7, 20, and 21.
  set1.insertElement(13);
  set1.insertElement(7);
  set1.insertElement(20);
  set1.insertElement(21);

  //Print set1.
  set1.printSet();

  //Remove element 13.
  set1.deleteElement(13);

  //Print set1.
  set1.printSet();

  //Get the number of prime numbers in set1.
  cout << "Number of prime numbers is " << set1.countPrimeNumbers() << endl;

  //Make set2 with range 0 to 100.
  mySet set2 = mySet(100);

  //Print set2.
  set2.printSet();

  //Copy set1 to make set3.
  mySet set3 = mySet(set1);

  //Check if the set3 and set1 are equal.
  bool equals = set3.isEqualTo(set1);
  cout << "set3 = set1 is " << equals << endl;
  return 0;
} 