#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger {
  private:
    //Data fields:
    int value;
    static double averageOfIntegers;  //Static makes all objects have the same value for this data field.
    static int sumOfIntegers;
    static int numberOfObjects;
  
  public:
    //Constructors:
    MyInteger();  //No-arg.
    MyInteger(int num); //User-defined.

    //Functions:
    int getMyInteger() const;  //Const prevents it from changing the integer.
    bool isEven() const;
    static bool isOdd(int);  //Static functions aren't called with objects.
    bool equals(int) const;
    bool equals(const MyInteger &myInt) const;
    static double getAverageOfIntegers();
};

#endif