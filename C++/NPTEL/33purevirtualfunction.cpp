#include <iostream>
using namespace std;


class class1{
  public:
    // = 0 means pure virtual function.
    virtual void meth1() = 0;
};

class class2 : public class1{
  public:
    void meth1(){
      cout << "Concrete class" ;
    };
};
34
int main(){
  class2 obj;
  obj.meth1();
  return 0;
};
