#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class demoConstructor{
  public:
    demoConstructor(){
      cout << "This is a constructor" ;
    };

    void sampleFunc(){
      cout << "\nThis is a sample function";
    };
};


int main(){
  demoConstructor demoObject ;
  demoObject.sampleFunc();
  return 0;
}
