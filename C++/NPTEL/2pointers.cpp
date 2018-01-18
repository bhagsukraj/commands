#include <stdio.h>

int main(){
  int *ip;
  int i;

  ip = &i ;
  *ip = 10;
  printf("The value of pointer is %p \n", ip);
  printf("The value of pointer is %p \n", &i);
  // The value of pointee is
  printf("The value of pointer is %d   ", *ip);
  return 0;
}
