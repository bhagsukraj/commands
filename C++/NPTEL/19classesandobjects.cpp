#include <iostream>
using namespace std;

class class1{
  public:
    double val1 , val2 ;
};


int main(){
  class1 bo = { 1.2345 , 2.3456 };

  cout << bo.val1 << "," << bo.val2 << endl;

  return 0;
}
