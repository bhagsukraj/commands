#include <iostream>
#include <vector>
#include <string>
#define max 10

using namespace std;

int main(){
  vector<int> arr;
  arr.resize(max);
  for(int i = 1 ; i <= max ; i++){
    arr[i] = i;
    cout << "The array value is :" << arr[i] ;
  } 

  return 0;
}
