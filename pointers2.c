#include <stdio.h>

int main()
{
  int a = 10;
  int *ptr = &a;

  printf("ptr = %p\n", ptr);         // p is 2002
  printf("ptr + 1 = %p\n", ptr + 1); // p is 2006
  return 0;
}