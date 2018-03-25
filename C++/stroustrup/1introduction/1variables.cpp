#include <iostream>
#include <string>

using namespace std;

int main(){
  double d = 2.2 ;
  int i = 7;
  d = d + i;
  i = d * i;
  cout<<"The value of d is :" << d << endl;
  cout<<"The value of i is :" << i << endl;

  string str1 ;
  // cin>>str1 ;
  // cout<< "The value of str1 i :" << str1;

  char c1;

  cin >> c1 ;
  switch(c1){
    case 'y':
      cout<<"The value is y" ;
      return true;
    case 'x':
      cout<<"The value is x" ;
      return true;
    default:
      cout<<"The value is infinity" << endl;
      return false;
  };


  return 0;
}
