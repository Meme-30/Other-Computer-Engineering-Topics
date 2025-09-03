#include <iostream>
using namespace std;

int main() {
  int num, sum;
  cout << "Enter a number between 0 and 1000 (not including 0 and 1000 themselves): ";  //Because it can only handle 3 digits currently.
  cin >> num;
  int digit1 = num % 10;  //Extract the first digit.
  int newNum = num / 10;  //Remove the first digit.
  if (newNum == 0) {  //When there's only one digit.
    sum = digit1;
    cout << "The sum of the digits is " << sum << endl;
  }
  else {  //When there's either two or three digits.
    int digit2 = newNum % 10; //Extract the second digit.
    int digit3 = newNum / 10; //If there isn't a third digit, it will just be zero.
    sum = digit1 + digit2 + digit3; //Add the digits.
    cout << "The sum of the digits is " << sum << endl;
  }
  return 0;
}