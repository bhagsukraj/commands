#include <iostream>
using namespace std;

class class1{
  public:
    void printName(){
      cout << "Hello India"  << endl ;
    };

};

int main(){

  class1 class1Obj ;
  class1Obj.printName();

  class1 *classPointer = &class1Obj ;
  classPointer->printName();
}
