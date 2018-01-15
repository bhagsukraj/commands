#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int arr[] = { 10, 6, 8 , 4, 10};
  sort (arr, arr+5);
  // arr+1 is used to tell the programm how many variables should be checked.
  for(int i = 0 ; i < 5 ; i++){
    cout << arr[i] << endl;
  };

  int key = 8;
  if ( binary_search (arr , arr+5 , key)){
    cout << "Found";
  }

};
