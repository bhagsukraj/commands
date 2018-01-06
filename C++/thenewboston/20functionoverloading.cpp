#include <iostream>

using namespace std;

void printNumber(int x){
  cout << "i am printing an integer number " << x << endl;
}

void printNumber(float x){
  cout << "i am printing a floting point number " << x << endl;
}

int main(){
  int x = 10;
  float y = 10.1456;

  printNumber(x);
  printNumber(y);
  return 0;
}
