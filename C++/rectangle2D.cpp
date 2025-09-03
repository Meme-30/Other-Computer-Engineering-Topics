#include <iostream>
#include "rectangle2D.h"

//Constructor:
Rectangle2D::Rectangle2D(double _x, double _y, double _width, double _height) {
  x = _x;
  y = _y;
  width = _width;
  height = _height;
}

//Member functions:
//Accessors:
double Rectangle2D::getX() const {
  return x;
}

double Rectangle2D::getY() const {
  return y;
}

double Rectangle2D::getWidth() const {
  return width;
}

double Rectangle2D::getHeight() const {
  return height;
}

//Mutators:
void Rectangle2D::setX(double newX) {
  x = newX;
}

void Rectangle2D::setY(double newY) {
  y = newY;
}

void Rectangle2D::setWidth(double newWidth) {
  width = newWidth;
}

void Rectangle2D::setHeight(double newHeight) {
  height = newHeight;
}

//Other:
bool Rectangle2D::contains(double X, double Y) const {
  if ((X >= x - width/2 && X <= x + width/2) && (Y >= y - height/2 && Y <= y + height/2)) { //x - width/2 is left vertical edge, x + width/2 is right v, y - height/2 is bottom h, and y + height/2 is top h.
    return true;
  }
  else {
    return false;
  }
}

bool Rectangle2D::contains(const Rectangle2D &r) const {
  if (((r.x - r.width/2 >= x - width/2) && (r.x + r.width/2 <= x + width/2)) && ((r.y - r.width/2 >= y - width/2) && (r.y + r.width/2 <= y + width/2))) { //r.width = width of expected smaller rectangle, but width = width of expected larger rectangle.
    return true;
  }
  else {
    return false;
  }
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {
  if (((r.x - r.width/2 >= x - width/2) && (r.y - r.height/2 >= y - height/2)) || ((r.x + r.width/2 <= x + width/2) && (r.y - r.height/2 >= y - height/2)) || ((r.x - r.width/2 > x - width/2) && (r.y + r.height <= y - height/2)) || ((r.x + r.width/2 <= x - width/2) && (r.y + r.height/2 <= y + height/2))) {  //Bottom left of r in called, or Bottom right of r in called, or Top left of r in called, or Top right of r in called.
    return true;
  }
  else {
    return false;
  }
}