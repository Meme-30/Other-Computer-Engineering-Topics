#include <iostream>
using namespace std;

int getDigit(int n) { //'n' is an integer passed in from the main function.
  int numOfDigits;  //The counter.
  while (n !=0) { //Loop until there are no digits left in the number.
    numOfDigits++;  //Add one to the counter.
    n /= 10;  //Remove the last digit.
  }
  return numOfDigits; //Give the counter back to the main function.
}

int main() {
  int num;
  cout << "Enter a positive integer: ";
  cin >> num;
  int digitCount = getDigit(num); //Run getDigit with the user's number as the parameter.
  cout << num << " has " << digitCount << " digits." << endl;
  return 0;
}