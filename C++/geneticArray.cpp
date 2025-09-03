#include <iostream>
#include <string>
using namespace std;
int SIZE = 5;

template <typename T> T minElement(T arr[], int size) {
  T min = arr[0]; //Initialize min as the first element.
  for (int i = 1; i < size; i++) {  //Start 1 after the first element to be able to consider the previous element.
    if (arr[i] < min) {  //Only overwrite min if this element is less than its current value.
      min = arr[i];
    }
  }
  return min;
}

int main() {
  cout << "Int test:" << endl;  //Test minElement with an integer array.
  int intArr[5] = {45, 84, 30, 99, 24};
  int intMin = minElement(intArr, SIZE);
  cout << "The minimum value is " << intMin << endl << endl;

  cout << "Double test:" << endl;  //Test minElement with a double array.
  double doubleArr[5] = {45.6, 84.5, 30.2, 99.9, 24.8};
  double doubleMin = minElement(doubleArr, SIZE);
  cout << "The minimum value is " << intMin << endl << endl;

  cout << "String test:" << endl;  //Test minElement with a string array.
  string strArr[5] = {"Who", "What", "Where", "When", "Why"};
  string strMin = minElement(strArr, SIZE);
  cout << "The minimum value is " << strMin << endl;
  return 0;
} 