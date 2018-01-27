#include <iostream>
using namespace std;

int i = 10;

namespace app1{
  class class1{
    public:
      class1(){
        cout<<"Namespace 1" << endl;
      };
  };
};

namespace app2{
  class class1{
    public:
      class1(){
        cout<<"Namespace 2" << endl;
      };
  };
};

int main(){
  app1::class1 obj1;
  app2::class1 obj2;

  using namespace app1;
  cout<<"i " << i;

  return 0;
};
