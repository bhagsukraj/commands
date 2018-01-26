#include <iostream>
using namespace std;

class class1{
  private:
    // a mutable data object can also be changed in a const object
    mutable int x = 10;

  public:
    void set_mut() const {
      x = 10;
      cout<<"The value of x " << x;
    };
};

int main(){
  const class1 bo;
  bo.set_mut();

  return 0;
}
