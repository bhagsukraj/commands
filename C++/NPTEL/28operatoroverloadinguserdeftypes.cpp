#include <iostream>
using namespace std;
struct complex{
  int i ;
  int j ;
};

complex operator+ ( complex &a , complex &b){
  complex r;
  r.i = ( a.i * b.i );
  r.j = ( a.j * b.j );
  return r;
};

int main(){
  complex y , z , i;
  y.i = 10 , y.j = 20;
  z.i = 30 , z.j = 40;

  i = y + z;
  cout <<"The vlaue of i " << i.i << endl;
  cout <<"The vlaue of j " << i.j << endl;
  return 0;
}
