#include <iostream>
using namespace std;

class class1{
  static int x;

  public:
    void print(){
      x = x+10;
      cout <<"The value of x is " << x << endl;
    };
};
// The static variables have to be instantiated before calling main
int class1::x = 10;

int main(){
  class1 bo , bo2;
  bo.print();
  bo2.print();

  return 0;
}
