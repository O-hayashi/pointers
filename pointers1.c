#include <stdio.h>

int main()
{
  int a = 5;
  int *ptr = &a;

  // char c = '$';
  // char *ptr2 = &c;

  printf("a = %d\n", a);
  printf("&a = %p\n", &a);
  printf("ptr = %p\n", ptr);
  printf("&ptr = %p\n", &ptr);
  printf("*ptr = %d\n", *ptr);
  printf("-----changed the data----\n");
  *ptr = 12;
  printf("*ptr = %d\n", *ptr);
}