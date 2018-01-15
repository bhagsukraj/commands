#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(){
  char str[10] = "ABCDE" ;
  stack<char> s;
  cout << strlen(str) << endl;

  for(int i = 0 ; i < strlen(str); i++){
    s.push(str[i]);
  };

  cout << "Reversed string " << endl;

  while(!s.empty()){
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
};
