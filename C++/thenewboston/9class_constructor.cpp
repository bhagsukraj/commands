#include <iostream>
#include <string>

using namespace std;

class class1 {
  public:
    class1(string name){
      cout <<"This is being printed from a constructor method name is " << name
                  << endl;
    };
};

int main(){
  class1 class1_obj("Ravi Kiran");
  class1 class1_obj2("Soujanya Vattikonda");
};
