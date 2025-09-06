#include <stdio.h>
void printArray(int *array, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("nums[%d] = %d\n", i, *(array + i));
  }
}
int main()
{
  int nums[] = {1, 2, 4, 6, 8, 9};
  int size = sizeof(nums) / sizeof(int);
  // printf("%d", size); //6
  printArray(nums, size);
  return 0;
}