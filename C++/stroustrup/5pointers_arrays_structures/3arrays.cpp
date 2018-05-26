#include <iostream>
using namespace std;

int main(){

  // An array can have only a constant size.
  int v[5] = {1,2,3,4,5};
  cout << v[3] << endl;
  // If dynamic sized array is required we should use vector
  // If array is not supplied with values they will defaulterd
  // to zeroes
  int i[8] = {1,3,5,6};
  cout << i[5] << endl;
  // pointers into arrays
  int v1[] = {1,2,3,4};
  // implicit conversion of an array into a pointer is below.
  int *p1 = v1;
  // passing address of v1[1] to the pointer p2
  int *p2 = &v1[1];

  cout << p1 << endl;
  cout << p2 << endl;
  cout << *p1 << endl;
  cout << *p2 << endl;
}
