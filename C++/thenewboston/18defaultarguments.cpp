#include <iostream>

using namespace std;

int volume(int l , int b=10 , int h=30);

int main(){
  cout << volume(10, 20 ,50);
}

int volume(int l , int b , int h){
  return l*b*h;
}
