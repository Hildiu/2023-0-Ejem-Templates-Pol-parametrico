//
// Created by MARIA HILDA BERMEJO RIOS on 2/19/23.
//

#ifndef EJ_1_ARRAY_H
#define EJ_1_ARRAY_H

using entero = int;
using real = double;
using caracter = char;

template <typename T>
class MyArray {
private:
    T* ptr;
    entero size;
public:
    MyArray(T *arr, entero s);
    T max();
    ~MyArray();
};

template <typename T>
MyArray<T>::MyArray(T *arr, entero s) {
  ptr = new T[s];
  size = s;
  for(entero i = 0; i < size; i++)
    ptr[i] = arr[i];
}
template <typename T>
T MyArray<T>::max() {
  T vmax = ptr[0];
  for (entero i = 1; i < size; i++){
    if (ptr[i] > vmax) vmax= ptr[i];
  }
  return vmax;
}

template <typename T>
MyArray<T>::~MyArray() {
  delete[] ptr;
  ptr = nullptr;
}



#endif //EJ_1_ARRAY_H
