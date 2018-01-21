#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  cout <<"size of int is " << sizeof(int) <<endl;
  int *p = (int *)malloc(sizeof(int));
  *p = 8;

  cout << *p;
  free(p);
  return 0;
}
