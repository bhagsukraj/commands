#include <iostream>
using namespace std;

class class1{
  private:
    int i , j;

  public:
    class1(){
      cout <<"This is a constructor" << endl;
    };

    void meth1(){
      cout <<"This is a normal method" << endl;
    };

    void set_prv(){
      i = 10;
      cout << "The value of i is " << i <<endl;
    };

    void get_prv(){
      cout << "The value of i is " << i ;
    }
};

int main(){
  class1 class1_bo;

  class1_bo.meth1();
  class1_bo.set_prv();
  class1_bo.get_prv();
}
