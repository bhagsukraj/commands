#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int return_val(int i = 10){
  return i;
};

// int return_val2(int i , float p = 2.5 , char h = "Hello India" );

int main(){

  int y = return_val(100);
  cout << y << endl ;

  y = return_val();
  cout << y << endl;

  cout << "wonderful ";
  return 0 ;
};
