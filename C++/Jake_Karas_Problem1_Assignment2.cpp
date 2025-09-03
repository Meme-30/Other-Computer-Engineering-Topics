#include <iostream>
using namespace std;

int evenDigits = 0;

int evenCount(int value) {
  if (value) {  //Run if the value isn't 0 yet.
    if (value % 2 == 0) { //Increment evenDigits if the last digit is even.
      evenDigits++;
    }
    evenCount(value / 10);  //Run again with the last digit removed.
  }
  return evenDigits;  //Output the number of digits that were even.
}

int main() {
  int num;
  cout << "Enter an integer: ";
  cin >> num;
  int evens = evenCount(num);
  cout << "The number of even digits is " << evens << endl;
}