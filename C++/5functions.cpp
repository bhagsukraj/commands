#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void printSomething();
int printCrap(int x , int y);

int main()
{
  printSomething();
  cout << "The return value of sum is " << printCrap(3,10) << endl;
  return 0;
}

void printSomething(){
  cout << "I am writing my first c function";
}

int printCrap(int x , int y){
  return x+y;
}
