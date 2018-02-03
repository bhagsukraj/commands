#include <iostream>
using namespace std;

class class1{
  public:
    class1(){
      cout << "class1 constructor " << endl;
    };
    void meth1(){
      cout << "class 1 meth 1" << endl;
    };
};

class class2{
  public:
    class2(){
      cout << "class2 constructor " << endl;
    };
    void meth1(){
      cout << "class2 meth1" << endl;
    };
    void meth2(){
      cout << "class2 meth2 " << endl;
    };
};

class class3: public class1 , public class2{
  public:
    // if the names of the methods are same in class1 and class2 it should be
    // explicitly mentioned what method would be used using the using key word
    using class2::meth1;
};

int main(){
  class3 obj;
  obj.meth1();
  obj.class1::meth1();

  return 0;
};
