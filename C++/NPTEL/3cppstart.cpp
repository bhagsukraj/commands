#include <iostream>
//math.h is deprecated. Instead cmath , cstdio , cstdlib should be used Instead
// of math.h , stdio.h , stdlib.h
#include <cmath>
using namespace std;

int main(){
  int i = 64;
  bool b = true;
  cout << "Hello World" << endl;
  cout << "I love my India"<< endl;
  cout <<"The bool value is " << b << endl;
  // sqrt is in the std namespace.
  cout << "the sqrt value of "<< i << "is "<< sqrt(i) ;
}
