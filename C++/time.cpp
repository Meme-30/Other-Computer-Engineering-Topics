#include <iostream>
#include <iomanip>
#include <cstring>
#include "time.h"

//Constructors
Time::Time() {  //No-arg
  hour = 0;
  minute = 0;
  second = 0;
}

Time::Time(unsigned int secs) {    //User-defined
  second = secs % 60; //Extract final seconds (< 60) from the input.
  int tempMinute = secs / 60;
  minute = tempMinute % 60; //Extract minutes.
  int tempHour = tempMinute / 60;
  hour = tempHour % 24; //Extract hours.
}

//Member functions:
void Time::printUniversal() const {
  std::cout << std::right << std::setfill('0') << std::setw(2) << hour << ":";
  std::cout << std::right << std::setfill('0') << std::setw(2) << minute << ":";
  std::cout << std::right << std::setfill('0') << std::setw(2) << second;
} //Interestingly, right justification puts the fill values on the left, and vice versa.
//
void Time::printStandard() const {
  unsigned int newHour;
  std::string amOrPm;
  //Assign newHour and amOrPm based on the hour of the universal time.
  if (hour == 0) {
    newHour = 12;
    amOrPm = "AM";
  }
  else if (hour < 12) {
    newHour = hour;
    amOrPm = "AM";
  }
  else if (hour == 12) {
    newHour = hour;
    amOrPm = "PM";
  }
  else {
    newHour = hour - 12;
    amOrPm = "PM";
  }
  std::cout << std::right << std::setfill('0') << std::setw(2) << newHour << ":";
  std::cout << std::right << std::setfill('0') << std::setw(2) << minute << ":";
  std::cout << std::right << std::setfill('0') << std::setw(2) << second;
  std::cout << " " << amOrPm;
}