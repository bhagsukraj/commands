#include <iostream>

using namespace std;

int& return_by_ref(int &x){
  return x;
}

int main(){
  int a = 10 ;
  int b = return_by_ref(a);
  cout << "The value of a " << b << endl ;
  cout << "The value of pointer a is " << &b << endl;

  return_by_ref(a) = 3;

  cout << "The value of a " << a << endl ;
  cout << "The value of pointer a is " << &a <<endl;

  cout << "The value of a " << a << endl ;
  a++;
  cout << "The value of a " << a << endl ;
  ++a;
  cout << "The value of a " << a << endl ;
};
