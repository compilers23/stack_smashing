#include "stdio.h"

void function(int a, int b, int c) {
   int *ret = 33;
   // find the address of the top of the stack
   //ret = ;
	 // whati is X? change the address in a way that "x = 1" will never be executed.
   //(*ret) += X;
}

void main() {
  int x;

  x = 0;
  function(1,2,3);
  x = 1;
  printf("%d\n",x);
}
