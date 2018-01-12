#include <iostream>
using namespace std;

class class1{
  public:
    class1(int a , int b): x(a) , y(b){
    }
    void printValues(){
      cout << x <<endl << y ;
    };

  private:
    int x ;
    int y ;
};

class class2{
  public:
    void printValues( class1 class1_bo){
      class1_bo.printValues();
    }
};

int main(){
  cout <<"composition" <<endl;

  class1 class1(3,4);
  class2 class2_bo;
  class2_bo.printValues(class1);

}
