#include <iostream>
using namespace std;

class A{
  public:
    virtual ~A(){};
};

class B : public A{};
class C {
  public:
    virtual ~C(){};
};

int main(){

  A a ; B b ; A *pA; B *pB ;

  pB = &b;
  pA = dynamic_cast<A*>(pB);
  cout << pB << " casts to " << pA << endl;

  pA = &b;
  pB = dynamic_cast<B*>(pA);
  cout << pA << " casts to " << pB << endl;

  pA = &a;
  pB = dynamic_cast<B*>(pA);
  cout << pA << " casts to " << pB;

  return 0;
};
