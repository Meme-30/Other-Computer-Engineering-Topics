#include <iostream>
#include "MyInteger.h"
using namespace std;

int main() {
  //Functions before integer declaration:
  cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;
  cout << "isOdd(3) = " << MyInteger::isOdd(3) << endl;

  //Integer declaration:
  MyInteger i1(9323), i2(147), i3(9323);

  //Functions after integer declaration:
  cout << "i1.isEven() = " << i1.isEven() << endl;
  cout << "i3.equals(843) = " << i3.equals(843) << endl;
  cout << "i1.equals(i3) = " << i1.equals(i3) << endl;
  cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;
  return 0;
}