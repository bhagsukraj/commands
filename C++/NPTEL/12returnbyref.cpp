#include <iostream>

using namespace std;

int return_by_val(int &x){
  cout << "The value of x " << x << endl;
  cout << "The value of pointer x " << &x <<endl;
  return x;
}

const int& return_by_ref(int &x){
  return x;
}

int main(){
  int a = 10;

  int b = return_by_val(a);
  cout <<"The value of b " << b << endl;
  cout <<"The value of pointer b " << &b << endl;

  const int &c = return_by_val(a);
  cout <<"The value of c " << c << endl;
  cout <<"The value of pointer c " << &c << endl;
}
