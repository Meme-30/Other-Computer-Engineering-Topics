#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int max = 0, count = 0;
  int numList[7];
  cout << "Enter 7 single digit integers separated by spaces: ";
  cin >> numList[0] >> numList[1] >> numList[2] >> numList[3] >> numList[4] >> numList[5] >> numList[6];  //Multi-variable input with space deliminator.
  for (int i = 0; i < sizeof(numList)/sizeof(numList[0]); i++) {  //Iterate through the array of numbers.
    if (numList[i] > max) { //If the number is greater than the current max, replace with the current number and reset the count to 1.
      max = numList[i];
      count = 1;
    }
    else if (numList[i] == max) { //If another of the max is found, increment thr count.
      count++;
    }
  }
  cout << "The largest number is " << max << endl;
  cout << "The occurrence count of the largest number is " << count << endl;
  cout << sizeof(numList)/sizeof(numList[0]);
}