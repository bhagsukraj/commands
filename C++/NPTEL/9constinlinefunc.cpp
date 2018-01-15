#include <iostream>
#define square(x) x*x
inline int func1(int x , int y){ return x * y;}

using namespace std;


int main(){

  int a = 3 , b ;

  b = square(a);
  cout << "The square of " << a << " is " << b <<endl;
  int y = func1(a,b);
  cout << "The product of a and b is " << y;
}
