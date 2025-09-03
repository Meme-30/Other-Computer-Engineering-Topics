#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

class Rectangle2D {
  private:
    //Data fields:
    double x, y, width, height;
  
  public:
    //Constructor:
    Rectangle2D(double, double, double, double);

    //Member Functions:
    //Accessors:
    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;

    //Mutators:
    void setX(double);
    void setY(double);
    void setWidth(double);
    void setHeight(double);

    //Other:
    bool contains(double, double) const;
    bool contains(const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r) const;
};

#endif