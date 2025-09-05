#include <stdio.h>

int main()
{
  int a = 1025;
  int *ptr = &a;

  char *ptr_ch;
  ptr_ch = (char *)ptr;

  // 1025 = 00000000 00000000 00000100 00000001

  printf("address = %d, value = %d\n", ptr, *ptr);
  printf("address = %d, value = %d\n", ptr + 1, *(ptr + 1));

  printf("address = %d, value = %d\n", ptr_ch, *ptr_ch);
  printf("address = %d, value = %d\n", ptr_ch + 1, *(ptr_ch + 1));
  return 0;
}