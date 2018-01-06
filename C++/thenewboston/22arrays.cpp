#include <iostream>

using namespace std;

int main(){
  int array1[5] = {1,22,34,43,56};
  int array2[9];

  cout << array1[2] << endl;

  for(int x = 0 ; x < 9 ; x++){
    array2[x] = x + 5 ;
    cout << x << "---------" << array2[x] << endl;
  };

};
