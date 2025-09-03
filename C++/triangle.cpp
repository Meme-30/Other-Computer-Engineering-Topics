#include "triangle.h"
#include "geometricObject.h"
#include <cmath>

//Constructors:
Triangle::Triangle() {   //No-Arg
  side1 = 1;
  side2 = 1;
  side3 = 1;
  color = "White";
  filled = false;
}

Triangle::Triangle(double _side1, double _side2, double _side3, std::string _color, bool _filled) {  //User-Defined
  side1 = _side1;
  side2 = _side2;
  side3 = _side3;
  color = _color;
  filled = _filled;
}

//Member Functions:
double Triangle::getPerimeter() const {
  return side1 + side2 + side3;
}

double Triangle::getArea() const {
  double s = side1 + side2 + side3;
  return sqrt(s*(s-side1)*(s-side2)*(s-side3)); //Using heron's formula.
}

void Triangle::display() const {
  double s = side1 + side2 + side3;
  double perimeter = s;
  double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
  std::cout << "Area   " << area << std::endl;
  std::cout << "Perimeter   " << perimeter << std::endl;
  std::cout << "Color   " << color << std::endl;
  std::cout << "Filled   " << filled << std::endl;
  std::cout << "-----------------------------" << std::endl;
}

bool Triangle::operator < (const Triangle & other) {  //Overload the < operator for this class.
  if (filled == 0 && other.filled == 1) {
    return true;
  }
  else if (filled == 1 && other.filled == 0) {  //Overload the >= operator for this class.
    return false;
  }
  else {
    if ((side1 + side2 + side3) < (other.side1 + other.side2 + other.side3)) {
      return true;
    }
  }
  return false; //Catch-all return case: Both are filled or both are not filled, but the perimeter check fails.
}

bool Triangle::operator >= (const Triangle & other) { //Overload the != operator for this class.
  if (filled == 1 && other.filled == 0) {
    return true;
  }
  else if (filled == 0 && other.filled == 1) {  //Overload the >= operator for this class.
    return false;
  }
  else {
    if ((side1 + side2 + side3) >= (other.side1 + other.side2 + other.side3)) {
      return true;
    }
  }
  return false; //Catch-all return case: Both are filled or both are not filled, but the perimeter check fails.
}

bool Triangle::operator != (const Triangle & other) {
  if (filled == other.filled) {
    return false;
  }
  else {
    if ((side1 + side2 + side3) == (other.side1 + other.side2 + other.side3)) {
      return false;
    }
  }
  return true;  //Catch-all return case: Both are filled or both are not filled, and the perimeter check passes.
}