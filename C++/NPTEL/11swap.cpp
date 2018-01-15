#include <iostream>

using namespace std;

void swap(int *x , int *y);

int main(){
  int x = 10 , y = 20 ;
  swap(&x , &y);
};

void swap(int *x , int *y){
  int t = *x ;

  cout << "The pointer of x is " << x << endl;
  cout << "The pointer of y is " << y << endl;
  *x = *y ;
  *y = t;
  cout << "The value of x is " << *x << endl;
  cout << "The value of y is " << *y << endl;
};
