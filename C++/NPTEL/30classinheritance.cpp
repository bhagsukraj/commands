#include <iostream>
using namespace std;

class base{
  private:
    int i , j;
  public:
    void meth1(){
      cout <<"Base class" << endl;
    };
};

class derived : public base{
public:
  void meth1(){
    cout <<"Derived class method" << endl;
  };
};

int main(){
  derived obj1 ;
  obj1.meth1();
  // obj1.meth2();
  return 0;
};
