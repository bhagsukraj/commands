#include <iostream>
using namespace std;

class class1{
  private:
    int x = 10 , y = 20;
  public:
    void meth1(){
      cout<< "Normal method" << endl ;
    };

    void meth2() const {
      cout<< "Constant method" << endl ;
    };
};

int main(){
  const class1 class1_bo;  
  //a const class cannot call a non constant method
  //so it cannot call meth1 . it can call only meth2
  //it's not possible to change the class data
  //parameters
  class1_bo.meth2();
  return 0;
}
