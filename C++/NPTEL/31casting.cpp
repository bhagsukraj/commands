#include <iostream>
using namespace std;



int main(){
  int i = 10;
  double j = 35.67;
  double k = j / i;
  double *p = &k;
  cout <<"k = " << k << endl;
  cout <<"&i " << &i << endl;

  i = int(j);
  cout <<"&i " << &i << endl;
  cout <<"*p " << p << endl;

  return 0;
}
