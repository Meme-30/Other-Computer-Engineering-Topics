#include <iostream>
#include <cmath>  //Just for the sqrt function later.
using namespace std;

int main() {
  int num;
  cout << "Enter a positive integer number for one of two purposes; if it's less than or equal to 100, it's to see if the given number is divisible by 4 or not, and if it's greater than 100, it's to find the square root: ";
  cin >> num;
  if (num < 0) {  //When the number is negative.
    cout << "The program doesn't accept negative numbers" << endl;
  }
  else if (num <= 100) {  //When the number is between 0 and 100.
    int quot = num / 4; //Integer division.
    int rem = num % 4;  //Use this to decide in the conditional statement next.
    rem == 0 ? cout << "The given number (" << num << ") is divisible by 4" << endl : cout << "The given number (" << num << ") isn't divisible by 4" << endl;  //Conditional statement for whether it's divisible by  or not.
    cout << "Quotient: " << quot << " and Remainder: " << rem << endl;
  }
  else {  //When the number is above 100.
    double root = sqrt(num);
    cout << "The entered number is greater than 100 and its square root is " << root << endl;
  }
  return 0;
}