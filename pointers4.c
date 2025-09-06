#include <stdio.h>

int main()
{
  int x = 5;
  int *ptr = &x;
  int **q = &ptr;
  int ***s = &q;

  printf("*ptr = %d, address = %d\n", *ptr, ptr);
  printf("*q = %d, address = %d\n", *q, q);
  printf("**q = %d, address = %d\n", **q, q);
  printf("***s = %d, address = %d\n", ***s, s);
  return 0;
}