#ifndef TIME_H
#define TIME_H

class Time {
  private:
    //Data fields:
    unsigned int hour, minute, second;
  
  public:
    //Constructors:
    Time(); //No-arg
    Time(unsigned int); //User-defined

    //Member functions:
    void printUniversal() const;
    void printStandard() const;
};

#endif