#include <iostream>

using namespace std;

int main(){
  int age = 20;

  switch(age){
    case 10:
      cout << "Young kid";
      break;
    case 16:
      cout << "Teen";
      break;
    case 18:
      cout << "Adult";
      break;
    default:
      cout << "Honeymoon";
  };
}
