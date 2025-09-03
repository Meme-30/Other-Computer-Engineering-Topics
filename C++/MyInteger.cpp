#include "MyInteger.h"

double MyInteger::averageOfIntegers = 0;
int MyInteger::sumOfIntegers = 0;
int MyInteger::numberOfObjects = 0;

MyInteger::MyInteger() {  //No-arg Constructor
  value = 0;  //Set value
  sumOfIntegers += 1;  //Update sum
  numberOfObjects++;  //Increment object counter
}

MyInteger::MyInteger(int _value) {  //No-arg Constructor
  value = _value;  //Set value
  sumOfIntegers += _value;  //Update sum
  numberOfObjects++;  //Increment object counter
}

//Class Functions:
int MyInteger::getMyInteger() const {
  return value;
}

bool MyInteger::isEven() const {
  if (value % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

bool MyInteger::isOdd(int num) {  //Static functions require arguments, but aren't called with objects, so static isn't stated again here.
  if (num % 2 == 1) {
    return true;
  }
  else {
    return false;
  }
}

bool MyInteger::equals(int num) const { //Const functions can't modify values.
  if(value == num) {
    return true;
  }
  else {
    return false;
  }
}

bool MyInteger::equals(const MyInteger &myInt) const {
  if (myInt.value == value) {
    return true;
  }
  else {
    return false;
  }
}

double MyInteger::getAverageOfIntegers() {
  if (numberOfObjects == 0) {
    averageOfIntegers = 0;
  }
  else {
    averageOfIntegers = sumOfIntegers / numberOfObjects;
  }
  return averageOfIntegers;
}