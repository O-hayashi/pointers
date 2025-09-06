#include <stdio.h>

void printStr(char *str)
{
  while (*str != '\0')
  {
    printf("%c", *(str));
    str++;
  }
  printf("\n");
}
int main()
{
  char name[] = "hello";
  printStr(name);

  return 0;
}