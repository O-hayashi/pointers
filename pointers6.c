#include <stdio.h>
int main()
{

  int nums[] = {1, 6, 3, 12, 5};
  int size = sizeof(nums) / sizeof(int);

  // int *ptr = &nums[0]; // this pointer stores the address of the first element of the array

  int *ptr = nums; // same thing as int *ptr = &nums[0]
  printf("nums = %d\n", nums);
  printf("*nums = %d\n\n", *nums);
  // printf("nums[0] = %d\n", *(ptr + 0));
  // printf("nums[1] = %d\n", *(ptr + 1));
  // printf("nums[2] = %d\n", *(ptr + 2));
  // printf("nums[3] = %d\n", *(ptr + 3));
  // printf("nums[4] = %d\n", *(ptr + 4));

  for (int i = 0; i < size; i++)
  {
    printf("nums[%d] = %d\n", i, *(ptr + i));
  }

  for (int i = 0; i < size; i++)
  {
    printf("nums[%d] = %d\n", i, *(nums + i));
  }

  printf("nums = %d\n", nums);
  printf("&nums[0] = %d\n", &nums[0]);
  printf("nums[0] = %d\n", nums[0]);
  printf("*nums = %d\n", *nums);
  // perhaps it just goes to show that the name of the array is actually a pointer to its first element itself
  return 0;
}