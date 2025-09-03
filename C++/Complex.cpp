#include <iostream>
#include "Complex.h"  //The header file for the class.
Complex::Complex() {  //No-arg constructor.
  real = 0;
  imaginary = 0;
}

Complex::Complex(double _real, double _imaginary) { //User-defined constructor.
  real = _real;
  imaginary = _imaginary;
}

//Accessors Implementation:
double Complex::getReal() {
  return real;
}
double Complex::getImaginary() {
  return imaginary;
}

//Mutators Implemntation:
void Complex::setReal(double _real) {
  real = _real;
}
void Complex::setImaginary(double _imaginary) {
  imaginary = _imaginary;
}

//In-Class Functions Implementation:
void Complex::printComplex() {
  if (imaginary >= 0) {
    std::cout << real << " + " << imaginary << "i";
  }
  else {
    std::cout << real << " - " << imaginary * -1 << "i";
  }
}
Complex Complex::addition(Complex &comp) {  //"real" and "imaginary" is already known because it's identified by the complex number name this is called with.
  double realSum = real + comp.getReal();
  double imaginarySum = imaginary + comp.getImaginary();
  Complex totalSum(realSum, imaginarySum);  //Combine both sums in a new object.
  return totalSum;
}