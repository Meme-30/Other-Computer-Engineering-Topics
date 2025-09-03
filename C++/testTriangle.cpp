#include <iostream>
#include "geometricObject.h"
#include "triangle.h"
using namespace std;

int main() {
  Triangle t1(4, 4, 4, "Red", false);
  t1.display();
  Triangle t2(5, 5, 2, "Green", true);
  t2.display();
  Triangle t3(5.5, 5.5, 1, "Blue", false);
  t3.display();
  bool lessThan = t1 < t2;
  cout << "(t1 < t2) = " << lessThan << endl;
  bool greaterThan = t3 >= t2;
  cout << "(t3 >= t2) = " << greaterThan << endl;
  bool notEquals = t3 != t1;
  cout << "(t3 != t1) = " << notEquals << endl;
	return 0;
}