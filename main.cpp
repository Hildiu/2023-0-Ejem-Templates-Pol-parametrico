#include <iostream>
#include "array.h"
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  MyArray<int> a(arr, 5);
  int x = a.max();
  cout << "El mayor del arreglo de enteros es " << x <<"\n";
  cout << "\n";

  double a2[7]={12.5, 34.6, 8.8, 9.4, 4.2, 3.2, 11.5};
  MyArray<double> objeto2(a2,7);
  double mayor = objeto2.max();
  cout << "El mayor del arreglo de doubles es: " << mayor << "\n";
  return 0;
}
