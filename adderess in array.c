#include<stdio.h>
int main() {
  int x[5];
  int i;
  for(int i = 0; i < 5; ++i){
    printf("&x[%d] = %p\n", i, &x[i]);
  }
  printf("address of array x: %p", x);
  return 0;
  }