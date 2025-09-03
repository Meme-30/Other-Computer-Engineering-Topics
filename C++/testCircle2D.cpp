#include <iostream>
#include <cmath>
#include "circle2D.h"
using namespace std;

int main() {
  Circle2D* pCir1 = new Circle2D(2, 2, 5.5);  //Create a new circle in the 2D plane on the heap.
  Circle2D cir2(-6, -3, 1.5); //Create a new 2D circle in the stack.
  cout << "Number of circle objects created: " << Circle2D::getNumberOfCircles() << endl; //Display number of circles created.
  Circle2D cir3(cir2);  //Copy cir2 into cir3.
  cout << "Number of circle objects created: " << Circle2D::getNumberOfCircles() << endl; //Display number of circles created again.
  cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl;  //Determine if pCir1 overlaps cir2.
  cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl; //Determine if cir3 overlaps cir2.
  delete pCir1; //Remove pCir1 from the heap.
  cout << "Number of circle objects created: " << Circle2D::getNumberOfCircles() << endl; //Display number of circles created again.
  return 0;
}