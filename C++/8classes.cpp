#include <iostream>
#include <string>

using namespace std;

class class1{
  public:
    void printNumber(int i){
      cout << "The value of number is " << i ;
    };

    void printName(string name){
      cout << "\nThe name is " << name ;
    };
};

int main(){  
  class1 class1_obj ;
  class1_obj.printNumber(10);
  class1_obj.printName("Ravi Kiran");
};
