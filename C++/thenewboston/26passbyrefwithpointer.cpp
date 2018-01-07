#include <iostream>
using namespace std;

void passByValue(int x);
void passByRef(int *y);

int main(){
  int x = 100;
  int y = 200;

  passByValue(x);
  passByRef(&y);

  cout << "x" << x << endl ;
  cout << "y" << y << endl ;
}

void passByValue(int x){
  x = 50;
};

void passByRef(int *y){
  *y = 30;
};
