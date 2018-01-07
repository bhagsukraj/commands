#include <iostream>
using namespace std;

class class1{
  public:
    class1(int a , int b): x(a) , y(b){
      cout << "Constructor set the private values " << endl ;
    };
    void printPrivate(){
      cout << "value of x " << x << endl << "value of y " << y ;
    };

  private:
    int x ;
    int y ;

};

int main(){
  class1 class1_bo(10,100);
  class1_bo.printPrivate();
}
