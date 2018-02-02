#include <iostream>
using namespace std;

void print(char * str){
  cout << "The value of c is " << * str ;
}


int main(){
  const char *c = "India is a great country";

  print(const_cast<char *>(c));

  return 0;
};
