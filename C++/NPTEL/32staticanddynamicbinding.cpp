#include <iostream>
using namespace std;

class B{
  public:
    void f(){
      cout <<"Base void "<< endl;
    };

    virtual void g(){
      cout <<"Base virtual void "<< endl;
    };
};

class D : public B{
  public:
    void f(){
      cout <<"Inherited void " << endl;
    };

    virtual void g(){
      cout <<"Inherited virtual void " << endl;
    };
};

int main(){
  B b;
  D d;

  b.f();
  b.g();
  d.f();
  d.g();

  cout<<"**********************************" << endl;
  B *pb = &b;
  B *pd = &d;

  pb->f();
  pb->g();
  pd->f();
  pd->g();
  cout <<"*******************************" << endl;

  B &rb = b;
  B &rd = d;

  rb.f();
  rb.g();
  rd.f();
  rd.g();

  return 0;
}
