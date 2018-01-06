#include <iostream>
using namespace std;

void printArray(int array1[] , int sizeArray){
  for(int x; x < sizeArray ; x++){
    cout << x << "------" << array1[x] << endl;
  }
}
int main(){

  int array2[5] = { 22 , 35, 78, 23, 80};

  printArray(array2 , 5);

}
