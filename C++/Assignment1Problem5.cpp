#include <iostream>
using namespace std;

int main() {
  int chCode; //Starts as an integer because otherwise it would only take 1 digit.
  cout << "Enter an ASCII code between 0 and 127: ";
  cin >> chCode;
  char chara = char(chCode);  //Converts the entire number to an ASCII character.
  cout << "The character is \"" << chara << "\"." << endl;
  return 0;
}