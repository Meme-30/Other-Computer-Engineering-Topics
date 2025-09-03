#include <iostream>
#include <cstring>
#include "stock.h"
using namespace std;

int main() {
  Stock MSFT("MSFT", "Microsoft Corporation");
  MSFT.setPreviousClosingPrice(27.5);
  MSFT.setCurrentPrice(27.6);
  cout << "Previous Closing Price: ";
  double previous = MSFT.getPreviousClosingPrice();
  cout << previous << endl;
  cout << "Current Price: ";
  double current = MSFT.getCurrentPrice();
  cout << current << endl;
  cout << "Percent Change: ";
  double delta = MSFT.getChangePercent();
  cout << delta << endl;
  return 0;
}