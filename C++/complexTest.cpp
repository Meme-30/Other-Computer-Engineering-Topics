#include <iostream>
#include "Complex.h"
using namespace std;

Complex additionTwo(Complex &comp1, Complex &comp2) { //Out-Of Class Addition Method.
  double realSum = comp1.getReal() + comp2.getReal(); //Both complex numbers had to be made arguments because this isn't associated with a particular complex number.
  double imaginarySum = comp1.getImaginary() + comp2.getImaginary();
  Complex fullSum(realSum, imaginarySum); //Combine both sums in a new object.
  return fullSum;
}

Complex additionArray(Complex complexArray[], int size) { //Out-Of Class function to add 2 or more complex numbers.
  double realSuperSum = 0;
  double imaginarySuperSum = 0;
  Complex superSum;
  if (size == 1) {  //Corner-case check for only having 1 complex number.
    superSum = complexArray[0];
  }
  else {
    for (int i = 0; i < size; i++) {  //Iterate through all complex numbers in the array.
      realSuperSum += complexArray[i].getReal();
      imaginarySuperSum += complexArray[i].getImaginary();
    }
    superSum.setReal(realSuperSum);
    superSum.setImaginary(imaginarySuperSum);
  }
  return superSum;
}

int main() {
  //Create and display the default complex number.
  Complex cplx0;
  cout << "Default number: ";
  cplx0.printComplex();
  
  //Create and dispaly the first user-defined complex number.
  Complex cplx1(2.4, 4.1);
  cout << "\n\nUser defined number 1: ";
  cplx1.printComplex();

  //Create and dispaly the second user-defined complex number.
  Complex cplx2(3.2, -3.6);
  cout << "\nUser defined number 2: ";
  cplx2.printComplex();

  //Add the two user-defined numbers with the in-class addition function.
  Complex cplxSum1 = cplx1.addition(cplx2);
  cout << "\n\nThe sum of the two user-defined numbers using the in-class addition function is: ";
  cplxSum1.printComplex();

  //Add the two user-defined numbers with the out-of-class addition function.
  Complex cplxSum2 = additionTwo(cplx1, cplx2);
  cout << "\n\nThe sum of the two user-defined numbers using the out-of-class addition function is: ";
  cplxSum2.printComplex();

  //Get and build two more complex numbers from the actual user.
  double newReal, newImaginary;
  cout << "\n\nEnter the real part of a complex number of your choice: ";
  cin >> newReal;
  cout << "\nEnter the imaginary part of that complex number: ";
  cin >> newImaginary;
  Complex cplx3(newReal, newImaginary);
  cout << "\n\nOne more time! Enter the real part of a complex number of your choice: ";
  cin >> newReal;
  cout << "\nEnter the imaginary part of that complex number: ";
  cin >> newImaginary;
  Complex cplx4(newReal, newImaginary);
  
  //Assemble an array of the four non-default complex numbers.
  Complex cplxarr[4];
  cplxarr[0] = cplx1;
  cplxarr[1] = cplx2;
  cplxarr[2] = cplx3;
  cplxarr[3] = cplx4;
  
  //Add and display the complex numbers in the array.
  Complex cplxMegaSum = additionArray(cplxarr, 4);
  cout << "\n\nThe sum of all complex numbers in the array is: ";
  cplxMegaSum.printComplex();
  cout << endl;
  return 0;
}