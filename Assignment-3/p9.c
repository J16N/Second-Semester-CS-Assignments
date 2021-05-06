#include <stdio.h>

int sum_of_int(int n)
{
  return n * (n + 1) / 2;
}

int main(void)
{
  int n = 0, sum = 0;
  printf("\n------ SUM OF SERIES ------\n");
  printf("\n N: "); scanf("%d", &n);

  for (size_t i = 0; i <= n; ++i)
    sum += sum_of_int(i);

  printf("\n Sum: %d\n\n", sum);

  return 0;
}