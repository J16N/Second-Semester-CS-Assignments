#include <stdio.h>

int main(void)
{
  printf("\n------ FIND THE SEQUENCE ------\n");
  // 1, 4, 7, ?, 13, 16, ?, 22, 25
  int sum = 0;
  for (size_t i = 1, j = 1; i <= 25; i += 3, ++j)
  {
    if (j == 4 || j == 7)
      printf("\n Missing Number: %lu", i);
    sum += i;
  }
  printf("\n Sum of the sequence: %d\n\n", sum);

  return 0;
}