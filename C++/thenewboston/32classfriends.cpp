#include <iostream>
using namespace std;

class class1{
  public:
    class1(){
      cout <<"class1 is being echoed out" ;
    }
    void printSome(){
      cout <<"print some value" << endl;
    }

  void friend1(class1 &obj);
};

void friend1(class1 &obj){
  obj.printSome();
};

int main(){
  cout << "class friends concept" << endl ;
  class1 class1_obj;

  friend1(class1_obj);
}
