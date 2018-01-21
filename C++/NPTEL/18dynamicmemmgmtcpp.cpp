#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int *p = new int(10);
  int *a = new int[3];

  cout << "The value of pointer p is " << p << endl;
  cout << "The value is " << *p << endl;

  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  cout << "The value of pointer a is "<< a << endl;
  cout << "The value of a(0) "<< a[0] <<endl;
  delete p;
  delete a;
  return 0;
}
