#include<stdio.h>
int main()
{ int a = 10;
  int * intPtr;
  char *charPtr;
  intPtr = &a;
  printf("%d\n",*intPtr);
  printf("---------------------\n");
  charPtr = (char*)intPtr;
  printf("%d\n", *charPtr);
  charPtr++;
  printf("%d\n", *charPtr);
  charPtr++;
  printf("%d\n", *charPtr);
  return 0;
} 
