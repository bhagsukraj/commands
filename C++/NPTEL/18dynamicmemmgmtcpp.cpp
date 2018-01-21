#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int *p = new int(10);

  cout << "The value of pointer p is " << p << endl;
  cout << "The value is " << *p << endl;
}
