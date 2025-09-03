#include <iostream>
using namespace std;

int main() {
  //Declare and assign initial variables:
  int grams = 5553; //Grams of grocery sold.
  int hours = 2;
  int minutes = 9;
  int seconds = 30;

  // Conversions:
  double kilograms = double (grams) / 1000;
  double totalTime = hours + double(minutes) / 60 + double(seconds) / 3600; //Casted minutes and seconds to ensure that results of divisions are doubles.

  //Main division:
  double rate = kilograms / totalTime;  //They're both already doubles, so no additional casting is required.
  cout << "The vendor sold " << rate << " kilograms of groceries per hour." << endl;
  return 0;
}