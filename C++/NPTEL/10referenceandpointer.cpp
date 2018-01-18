#include <iostream>

using namespace std;

int main(){
  int a=10 , &b = a;

  cout << "a = " << a << " , b = " << b << endl;
  cout << "&a = " << &a << endl << "&b = " << &b << endl;

  a = 20;
  cout << "b = " << b << endl;

  a = 30;
  cout << "b = " << b << endl;

  b = 40;
  cout << "a = " << a;
}
