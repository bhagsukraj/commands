#include <iostream>

using namespace std;

class class1{
  private:
    int x , y ;

  public:
    class1(int x , int y): x(x) , y(y){
      cout <<"class1 constructor" << x << y << endl;
    } ;
    class1(const class1& c): x(c.x), y(c.y){
      cout <<"class1 copy constructor" << x << y << endl;
    } ;
    ~class1(){
      cout <<"class1 destructor" << endl;
    } ;
};

int main(){
  class1 bo1(100,200) ,
         bo2(bo1);



  return 0;
}
