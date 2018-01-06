#include <iostream>
#include <string>

using namespace std;

string x = "outside variable";

int main(){
  string x = "internal variable";
  cout << ::x << endl;
}
