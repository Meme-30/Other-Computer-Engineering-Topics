#include <iostream>
#include <cstring>
#include "stock.h"

//Constructor:
Stock::Stock(std::string _symbol, std::string _name) {
  symbol = _symbol;
  name = _name;
  previousClosingPrice = 0; //Initiallize doubles to 0.
  currentPrice = 0;
}

//Member functions:
//Accessors:
std::string Stock::getSymbol() const {
  return symbol;
}

std::string Stock::getName() const {
  return name;
}

double Stock::getPreviousClosingPrice() const {
  return previousClosingPrice;
}

double Stock::getCurrentPrice() const {
  return currentPrice;
}

//Mutators:
void Stock::setPreviousClosingPrice(double newPrevPrice) {
  previousClosingPrice = newPrevPrice;
}

void Stock::setCurrentPrice(double newCurrentPrice) {
  currentPrice = newCurrentPrice;
}

//Other:
double Stock::getChangePercent() const {
  double change = currentPrice - previousClosingPrice;
  return change;
}