#include <iostream>
using namespace std;

class A{
  public:
    A(){
      cout << "Class A" << endl ;
    };
    void print(){
      cout << "Print out";
    }
};

class B : public A{ };

int main(){
  A a;
  B b;

  a = static_cast<A>(b);
  a.print();
  return 0;
};
