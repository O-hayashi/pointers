#include <stdio.h>

int main()
{
  int a = 10;
  int *ptr = &a;

  printf("ptr = %p\n", ptr);         // p is 2002
  printf("ptr + 1 = %p\n", ptr + 1); // p is 2006
  printf("ptr + 2 = %p\n", ptr + 2); // p is 2010
  return 0;
}