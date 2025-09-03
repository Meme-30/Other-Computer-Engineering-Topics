#include <iostream>
#include "myVector.h"
using namespace std;


int main() {
  myVector<int>* vec1 = new myVector<int>();  //Create a no-arg myVector on the heap.
  myVector<double>* vec2 = new myVector<double>(8);  //Create a user-defined myVector on the heap.
  
  vec2->insertBeg(8.8);
  vec2->insertBeg(63.5);
  vec2->insertEnd(55.2);
  vec2->insertEnd(80.5);
  vec2->insertBeg(24.9);
  vec2->insertBeg(93.7);
  vec2->insertEnd(60.1);
  vec2->insertEnd(13.5); 
  vec2->printElements();
  cout << endl;
  int size = vec2->getSize();
  cout << size << endl;
  vec2->insertEnd(99.9); 
  vec2->printElements();
  cout << endl;
  vec2->removeEnd();
  vec2->printElements();
  cout << endl;
  vec2->removeBeg();
  vec2->printElements();
  cout << endl;

  myVector<double>* vec3 = new myVector<double>(*vec2); //Copy vec2 into vec3.
  delete vec1;  //Remove vec1 from the heap.
  delete vec2;  //Remove vec2 from the heap.
  delete vec3;  //Remove vec3 from the heap.
  return 0;
} 