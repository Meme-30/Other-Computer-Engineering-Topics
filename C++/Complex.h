#ifndef COMPLEX_H //Only define if not already defined.
#define COMPLEX_H
#endif

class Complex {
  private:
    //Class variables:
    double real;
    double imaginary;

  public:
    //Constructors:
    Complex();
    Complex(double, double);

    //Accessors:
    double getReal();
    double getImaginary();

    //Mutators:
    void setReal(double);
    void setImaginary(double);

    //In-Class Functions:
    void printComplex();
    Complex addition(Complex &comp);
};