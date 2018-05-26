#include <iostream>
using namespace std;

int main(){
  int i = 10;
  const int *p = &i;
  cout << p << "\t" << *p << endl;

  // pointer to a constant which is an array
  int a[] = {1,2,3,4,5};
  const int *p1 = a;
  cout << p1 << "\t" << *p1 << endl;
  p1 = &i;
  cout << p1 << "\t" << *p1 << endl;
  cout << &a[0] << "\t" << a[0] << endl;

}
