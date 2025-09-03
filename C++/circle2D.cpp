#include <iostream>
#include <cmath>
#include "circle2D.h"

int Circle2D::numberOfCircles = 0;  //Program starts with 0 circles.

//Constructors:
Circle2D::Circle2D(double _x, double _y, double _radius) {  //User-Defined Constructor.
  x = _x;
  y = _y;
  if (_radius > 0) {  //Radius check.
    radius = _radius;
  }
  else {
    radius = 1;
  }
  numberOfCircles++;
}

Circle2D::Circle2D(const Circle2D & circle) { //Copy Constructor.
  x = circle.x;
  y = circle.y;
  radius = circle.radius;
  numberOfCircles++;
}

Circle2D::~Circle2D() { //Destructor.
  numberOfCircles--;
}

//Member Functions:
double Circle2D::getX() const {
  return x;
}

double Circle2D::getY() const {
  return y;
}

double Circle2D::getRadius() const {
  return radius;
}

int Circle2D::getNumberOfCircles() {
  return numberOfCircles;
}

bool Circle2D::overlaps(const Circle2D &circle) const {
  if (radius > sqrt(pow(circle.x - x, 2) + pow(circle.y - y, 2))) { //Does distance formula and then compares the radius of the base circle to the answer.
    return true;
  }
  else {  //2 tangent circles will still count as overlapping because a single point is shared between the circles.
    return false;
  }
}