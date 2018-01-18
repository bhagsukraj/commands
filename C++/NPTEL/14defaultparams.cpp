#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int return_val(int i = 10){
  return i;
};

int main(){

  int y = return_val(100);
  cout << y << endl ;

  y = return_val();
  cout << y << endl;
  
  return 0 ;
};
