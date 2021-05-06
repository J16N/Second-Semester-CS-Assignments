#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_of_digits(int n)
{
  int sum = 0;
  n = abs(n);

  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }

  return sum;
}

int main(void)
{
  int n = 0;
  printf("\n------ SUM OF DIGITS ------\n");
  printf("\n Number: "); scanf("%d", &n);
  printf("\n Sum of digits of '%d': %d\n\n", n, sum_of_digits(n));

  return 0;
}