#include <iostream>
#include <string>
using namespace std;
int SIZE1 = 5;
int SIZE2 = 10;

template <typename T> bool isGreater(const T list1[], const T list2[], int size1, int size2) {
  T largestValue = list1[0];  //Initialize largestValue as the first element of list1.
  for (int i = 1; i < size1; i++) {  //Search through the rest of list1.
    if (list1[i] > largestValue) {  //Only overwrite if there is a new largest value.
      largestValue = list1[i];
    }
  }
  bool status = true; //Let status start as true.
  for (int i = 0; i < size2; i++) { //Switch the status to false if an element of list2 is less than largestValue.
    if (list2[i] < largestValue) {
      status = false;
    }
  }
  return status;
}

int main() {
  cout << "Int test (Fail Case):" << endl;
  int intArr1 [5] = {91, 70, 9, 22, 87};  //The max of this list is 91.
  int intArr2 [10] = {34, 49, 8, 46, 92, 19, 42, 28, 67, 76}; //This list has smaller values than the max of the previous.
  bool larger = isGreater(intArr1, intArr2, SIZE1, SIZE2);
  cout << "isGreater(intArr1, intArr2, SIZE1, SIZE2) is " << larger << endl << endl;

  cout << "Int test (Success Case):" << endl;
  int intArr3 [5] = {0, 1, 2, 3, 4};  //The max of this list is 91.
  int intArr4 [10] = {34, 49, 8, 46, 92, 19, 42, 28, 67, 76}; //This list has only larger values than the max of the previous.
  larger = isGreater(intArr3, intArr4, SIZE1, SIZE2);
  cout << "isGreater(intArr3, intArr4, SIZE1, SIZE2) is " << larger << endl << endl;

  cout << "Double test (Fail Case):" << endl;
  double doubleArr1 [5] = {91.3, 70.6, 9.2, 22.5, 87.1};  //The max of this list is 91.3.
  double doubleArr2 [10] = {34.7, 49.8, 8.4, 46.1, 92.2, 19.5, 42.6, 28.0, 67.3, 76.9}; //This list has smaller values than the max of the previous.
  larger = isGreater(doubleArr1, doubleArr2, SIZE1, SIZE2);
  cout << "isGreater(doubleArr1, doubleArr2, SIZE1, SIZE2) is " << larger << endl << endl;

  cout << "Double test (Success Case):" << endl;
  double doubleArr3 [5] = {0.1, 0.2, 0.3, 0.4, 0.5};  //The max of this list is 0.5.
  double doubleArr4 [10] = {34.7, 49.8, 8.4, 46.1, 92.2, 19.5, 42.6, 28.0, 67.3, 76.9}; //This list has only larger values than the max of the previous.
  larger = isGreater(doubleArr3, doubleArr4, SIZE1, SIZE2);
  cout << "isGreater(doubleArr3, doubleArr4, SIZE1, SIZE2) is " << larger << endl << endl;

  cout << "String test (Fail Case):" << endl;
  string stringArr1 [5] = {"I", "You", "He", "She", "They"};  //The max of this list is You.
  string stringArr2 [10] = {"Minecraft", "Creeper", "Spider", "Enderman", "Zombified Piglin", "Strider", "Wither", "Axolotl", "Allay", "Warden"}; //This list has smaller values than the max of the previous (featuring Minecraft mobs).
  larger = isGreater(stringArr1, stringArr2, SIZE1, SIZE2);
  cout << "isGreater(stringArr1, stringArr2, SIZE1, SIZE2) is " << larger << endl << endl;
  cout << "String test (Fail Case):" << endl;
  string stringArr3 [5] = {"I", "You", "He", "She", "They"};  //The max of this list is You.
  string stringArr4 [10] = {"minecraft", "creeper", "spider", "enderman", "zombified piglin", "strider", "wither", "axolotl", "allay", "warden"}; //This list has only larger values than the max of the previous (featuring Minecraft mobs).
  larger = isGreater(stringArr3, stringArr4, SIZE1, SIZE2);
  cout << "isGreater(stringArr3, stringArr4, SIZE1, SIZE2) is " << larger << endl;
  return 0;
}