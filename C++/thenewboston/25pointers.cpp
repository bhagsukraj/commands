#include <iostream>
using namespace std;

int main(){
  cout << "pointers" << endl;
  int a = 100;
  cout << &a << endl ;
// * before a variable indicates pointer variable.
  int *fishPointer;
  fishPointer = &a;
  cout << fishPointer << endl;
}
