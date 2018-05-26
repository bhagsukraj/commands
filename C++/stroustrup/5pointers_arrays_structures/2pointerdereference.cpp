#include <iostream>
using namespace std;

int main(){
  char c = 'a';

  char* p = &c;

  char c2 = *p;

  cout << c2 << endl;

}
