#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << left; //Always start setw() from a left justification.
  cout << setw(10) << "Meters" << setw(10) << "Feet" << endl; //Use setw(10) to give everything 10 positions available for output.
  for (int index = 1; index <= 15; index++) {
    cout << setw(10) << index << setw(10) << setprecision(3) << fixed << double(index) * 3.280 << endl; //Use setprecision(3) and fixed to make the doubles for the feet have three digits after the decimal points.
  }
  return 0;
}