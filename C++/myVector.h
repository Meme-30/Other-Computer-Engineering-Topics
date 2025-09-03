#include <iostream>
#ifndef MYVECTOR_H
#define MYVECTOR_H

template <typename T>
class myVector {
  private:
    T* vec;  //Class Pointer
    int size, capacity; //Data Fields
  
  public:
    //Constructors:
    myVector();  //No-Arg
    myVector(int _capacity); //User-Defined
    myVector(const myVector & myVec);  //Deep Copy
    ~myVector();  //Destructor

    //Member Functions:
    int getSize() const;
    int getCapacity() const;
    void printElements() const;
    void insertBeg(T value);
    void insertEnd(T value);
    void removeBeg();
    void removeEnd();
    void increaseCapacity();
    void decreaseCapacity();
    
};

//Implementations:
//Constructors:
template<typename T>
myVector<T>::myVector() { //No-arg
  size = 0;
  capacity = 4;
  vec = new T[capacity];
}

template<typename T>
myVector<T>::myVector(int _capacity) {  //User-defined
  size = 0;
  capacity = _capacity;
  vec = new T[capacity];
}

template<typename T>
myVector<T>::myVector(const myVector & myVec) { //Deep Copy
  capacity = myVec.capacity;
  size = myVec.size;
  vec = new T[myVec.capacity];
  for (int i = 0; i < size; i++) {
    vec[i] = myVec.vec[i];
  }
}

template<typename T>
myVector<T>::~myVector() {
  delete [] vec;
}  //Destructor

//Member Functions:
template<typename T>
int myVector<T>::getSize() const {
  return size;
}

template<typename T>
int myVector<T>::getCapacity() const {
  return capacity;
}

template<typename T>
void myVector<T>::printElements() const {
  std::cout << "{";
  for (int i = 0; i < size; i++) {
    std::cout << vec[i];
    if (i != size - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "}";
}

template<typename T>
void myVector<T>::insertBeg(T value) {
  increaseCapacity(); //Check to see if the capacity of the array needs to be increased.
  for (int i = size - 1; i >= 0; i--) { //Shift all elements in vec 1 space to the right.
    T temp = vec[i];
    vec[i+1] = temp;
  }
  size++; //Increment the size of the array by 1.
  vec[0] = value; //Set the first element of the array to the new value.
}

template<typename T>
void myVector<T>::insertEnd(T value) {
  increaseCapacity(); //Check to see if the capacity of the array needs to be increased.
  size++; //Increment the size of the array by 1.
  vec[size - 1] = value;  //Set the last element of the array to the new value.
}

template<typename T>
void myVector<T>::removeBeg() {
  for (int i = 1; i < size; i++) {  //Shift all elements in vec 1 space to the left.
    T temp = vec[i];
    vec[i-1] = temp;  //This will remove the first value, but leave the last value duplicated.
  }
  T gonerValue = vec[--size];  //Pop the duplicated last element from the array.
  decreaseCapacity(); //Check to see if the capacity of the array can be decreased.
}

template<typename T>
void myVector<T>::removeEnd() {
  T gonerValue = vec[--size];  //Pop the last element from the array.
  decreaseCapacity(); //Check to see if the capacity of the array can be decreased.
}

template<typename T>
void myVector<T>::increaseCapacity() {
  if (size == capacity) {
    T* old = vec;
    capacity = 2 * size;
    vec = new T[size * 2];
    for (int i = 0; i < size; i++)  //Manually copy each element of the smaller array into the larger one.
      vec[i] = old[i];
    delete [] old;
  }
}

template<typename T>
void myVector<T>::decreaseCapacity() {
  if (size == capacity / 2) {
    T* old = vec;
    capacity = size / 2;
    vec = new T[size * 2];
    for (int i = 0; i < size; i++)  //Manually copy each element of the larger array into the smaller one.
      vec[i] = old[i];
    delete old;
  }
}

#endif