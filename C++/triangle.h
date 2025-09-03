#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "geometricObject.h"

class Triangle {
  private:
    //Data Fields:
    double side1, side2, side3;
    std::string color;
    bool filled;
  
  public:
    //Constructors:
    Triangle(); //No-Arg
    Triangle(double _side1, double _side2, double _side3, std::string _color, bool _filled); //User-Defined

    //Member Functions:
    double getPerimeter() const;
    double getArea() const;
    void display() const;
    bool operator < (const Triangle & other);
    bool operator >= (const Triangle & other);
    bool operator != (const Triangle & other);
};

#endif