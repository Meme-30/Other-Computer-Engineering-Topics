#ifndef CIRCLE2D_H
#define CIRCLE2D_H

class Circle2D {
  private:
    //Data Fields:
    double x, y, radius;
    static int numberOfCircles;
  
  public:
    //Constructors:
    Circle2D(double _x, double _y, double _radius); //User-Defined Constructor.
    Circle2D(const Circle2D & circle);  //Copy Constructor.
    ~Circle2D();  //Destructor.

    //Member Functions:
    double getX() const;
    double getY() const;
    double getRadius() const;
    static int getNumberOfCircles();
    bool overlaps(const Circle2D & circle) const;
};

#endif