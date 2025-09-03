#include <iostream>
#include <iomanip>
#include <cstring>
#include "time.h"
using namespace std;

int main() {
  Time time1;
  cout << "Universal time is ";
  time1.printUniversal();
  cout << "\nStandard time is ";
  time1.printStandard();
  cout << "\n------------------------------\n";

  Time time2(555550);
  cout << "Universal time is ";
  time2.printUniversal();
  cout << "\nStandard time is ";
  time2.printStandard();
  cout << "\n------------------------------\n";

  Time time3(55550);
  cout << "Universal time is ";
  time3.printUniversal();
  cout << "\nStandard time is ";
  time3.printStandard();

  cout << endl;
}