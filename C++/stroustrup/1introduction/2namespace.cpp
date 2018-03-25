#include <iostream>
using namespace std;

namespace name1{
  int i = 20 ;
  void prin(int i){
    cout<< "Print name1: " << i << endl;
  }
}

int main(){
  cout<< name1::i << endl;
  name1::prin( 20 );
  return 0;
}
