#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int add(int a , int b){
  cout <<"integer function" << endl;
  return a+b ;

}

double add(double a , double b){
  cout <<"double function" << endl;
  return a+b;
}

int main(){
  int a = 10 , b = 20 , c ;
  double x = 23.54 , y = 23.678 , z;

  c = add(a,b);
  cout << "The value of c is " << c <<endl ;

  z = add(x,y);
  cout << "The value of z is " << z <<endl;


  return 0;
}
