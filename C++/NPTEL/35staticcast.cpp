#include <iostream>
using namespace std;


int main(){
  int a = 10;
  double b = 20 , c = 40;
  int *bd = &a;


  a = static_cast<int>(b);
  cout<<"The value of a is " << a << endl;
  c = static_cast<double>(a);
  cout<<"The value of a is " << a << endl;
  cout<<"The vlaue of b is " << c << endl;
  cout<<"The value of bd is " << *bd << endl;
  return 0;
};
