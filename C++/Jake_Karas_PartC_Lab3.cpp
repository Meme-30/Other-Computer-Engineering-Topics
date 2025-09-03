#include <iostream>
using namespace std;

int main() {
  int numLines;
  cout << "Enter the number of lines for the number pyramid: ";
  cin >> numLines;
  if (numLines > 0) { //To prevent the corner case of 0 from breaking the program.
    for (int index1 = 1; index1 <= numLines; index1++) {  //Controls vertical position while building the pyramid.
      for (int index2 = numLines; index2 > 1; index2--) { //Descending flank (left side) of pyramid.
        if (index2 <= index1) { //Only prints the number when it's less than or equal to the line number.
          cout << index2 << " ";
        }
        else {  //Otherwise, replaces the number with an additional space.
          cout << "  ";
        }
      }
      cout << "1 ";  //Pyramid spine of 1's is always present.
      for (int index3 = 2; index3 <= numLines; index3++) {  //Ascending flank (right side) of pyramid.
        if (index3 <= index1) { //Only prints the number when it's less than or equal to the line number.
          cout << index3 << " ";
        }
        else {  //Otherwise, replaces the number with an additional space.
          cout << "  ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}