#include <iostream>
using namespace std;

class class1{
  int a;

  public:
    class1(int i): a(i){
      cout << "constructor" << endl;
    };

    friend void print(const class1 &obj);
};

void print(const class1 &obj){
  cout<<"The value of a is " << obj.a << endl;
};

int main(){
  class1 obj(10);
  print(obj);

  return 0;
};
