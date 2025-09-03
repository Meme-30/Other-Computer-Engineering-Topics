#ifndef MYSET_H
#define MYSET_H

class mySet {
  private:
    //Data Fields:
    unsigned int range, size;
    bool* set;

  public:
    //Constructors:
    mySet(unsigned int); //User-defined
    mySet(const mySet&); //Copy
    ~mySet(); //Destructor

    //Member Functions:
    void insertElement(int k);
    void deleteElement(int m);
    void printSet();
    bool isEqualTo(const mySet&) const;
    int countPrimeNumbers() const;
};

#endif