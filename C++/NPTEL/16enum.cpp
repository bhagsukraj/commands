#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
enum E { c0 = 0 , c1 = 1 , c2 = 2 };

int main(){
  E a = c1 , b = c2 ;

  cout << a << ";" << b ;

  return 0;
}
