#include <iostream>
using namespace std;

class class1{
  public:
    double val1 , val2 ;
    double fetch_val(double val3 , double val4){
      val3 = this->val1;
      val4 = this->val2;
      return val3+val4;
    }
};


int main(){
  class1 bo = { 1.2345 , 2.3456 };

  cout << bo.val1 << "," << bo.val2 << endl;

  double val1 = bo.fetch_val(3,4);
  cout << "This pointer " << val1;
  return 0;
  
}
