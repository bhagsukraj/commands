#include <iostream>
using namespace std;

void printNum(int a , const int b){
  a = 10;

  cout << a << endl << b << endl ;
}

int main(){
  const int i = 10;

  cout << i << endl;

  printNum(10,100);
}
