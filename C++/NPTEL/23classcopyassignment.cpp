#include <iostream>
using namespace std;

class class1{
  private:
    int x , y;
  public:
    class1(int a , int b):x(a) , y(b){
      cout<<"Class constructor" << endl;
      cout<< a << "," << b << endl;
    };

    class1(const class1 &c):x(c.x*2) , y(c.y*2){
      cout<<"copy constructor" << endl;
      cout<< x << "," << y << endl;
    };

    class1 &operator = (const class1 &c){
      cout<<"copy assignment" << endl;
      x = c.x * 10 ;
      y = c.y * 20 ;
      return *this;
    };

    void print(){
      cout << x << "," << y;
    }
};

int main(){
  class1 bo(25,35);
  class1 bo2(bo);
  class1 bo3(bo);
  bo3 = bo;
  bo3.print();

  return 0;
}
