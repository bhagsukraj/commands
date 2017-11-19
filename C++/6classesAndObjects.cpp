#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class myFirstClass{
  public:
    int var1;
    void simpleFunc(){
      cout << "This is a first class method simpleFunc";
      var1 = 246;
      cout << "The public variable is " << var1 ;
    };

    int var2=100;
    void simpleFunc2(int x , int y){
      cout << "\nThe sum on first class is " << x+y << endl ;
      cout << "\nThe second variable is " << var2 ;
    };
};

int main(){
  myFirstClass myFirstObject ;
  myFirstObject.simpleFunc();
  myFirstObject.simpleFunc2(3,4);
  return 0;
}
