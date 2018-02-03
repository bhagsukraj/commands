#include <iostream>
#include <typeinfo>
using namespace std;

class A{};

class B : public A{};

int main(){
  A a ; B b; A *pA ; B *pB;

  cout << typeid(a).name() << endl ;
  cout << typeid(b).name() << endl ;
  cout << typeid(&a).name() << endl ;
  cout << typeid(&b).name() << endl ;
  cout << typeid(pA).name() << endl ;

}
