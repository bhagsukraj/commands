#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
  cout << "Memory concepts";
  int var1 = 99 , var2 = 100 ;

  var1 = 100;
  var2 = 200;
  var2 = var2 - var1 * 0.5 ;
  cout << "\nVariable 1 " << var1 << "\nVariable2 " << var2;
  int x = var2 / 11;
  cout << "\ndivision " << x;
  int y = 9 / 10;
  cout << "\n" << y;
}
