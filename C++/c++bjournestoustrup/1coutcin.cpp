#include <iostream>
using namespace std;


int main(){
  cout <<"Do you want to proceed ?" << endl;
  char answer=0;

  cin>>answer ;

  switch(answer){
    case 'y':
      cout <<"The answer is yes " << endl;
      break;
    case 'n':
      cout <<"The answer is no " << endl;
      break;
    default:
      cout <<"The answer is not understandable" << endl;
      break;
  }

  return 0;
}
