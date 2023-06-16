#include<stdio.h>
int main() {
  char alphabet;
  printf("Enter a alphabet:");
  scanf("%c", &alphabet);
  if((alphabet >= 'a' &&  alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
  printf("%c is a alphabet", alphabet);
  else
   printf("%c is a not alphabet", alphabet);
   return 0;
}