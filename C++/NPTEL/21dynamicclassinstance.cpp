#include <iostream>
using namespace std;

class class1{
  private:
    int var1;
  public:
    class1():var1(10){
      cout <<"This class constructor var1 value is " << var1 << endl;
    };
    void meth1(){
      cout << "printing using pointer";
    };
};

int main(){
  class1* bo = new class1();
  bo->meth1();
  delete bo;
  return 0;
  
}
