#include <stdio.h>
void increament(int *val)
{
  (*val)++;
}
void decreament(int *val)
{
  (*val)--;
}
int main()
{
  int a = 5;
  increament(&a);
  printf("a = %d\n", a);
  decreament(&a);
  printf("a = %d\n", a);
  return 0;
}