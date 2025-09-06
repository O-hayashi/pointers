#include <stdio.h>
void printStr(const char *c)
{
  // since im gonna use this funciton to read only im gonna put a const keyword before the argument
  while (*c != '\0')
  {
    printf("%c", *c);
    c++;
  }

  printf("\n");
}

int main()
{
  char name[] = "Yash Aryan";
  printStr(name);
  return 0;
}