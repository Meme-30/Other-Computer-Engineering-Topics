#include <iostream>
#include <cstring>
#ifndef STOCK_H
#define STOCK_H

class Stock {
  private:
    //Data fields:
    std::string symbol, name;
    double previousClosingPrice, currentPrice;

  public:
    //Constructor:
    Stock(std::string, std::string);

    //Member Functions:
    //Accessors:
    std::string getSymbol() const;
    std::string getName() const;
    double getPreviousClosingPrice() const;
    double getCurrentPrice() const;

    //Mutators:
    void setPreviousClosingPrice(double);
    void setCurrentPrice(double);

    //Other:
    double getChangePercent() const;
};

#endif