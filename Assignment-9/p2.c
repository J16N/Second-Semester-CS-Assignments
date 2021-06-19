#include <stdio.h>

int sum_of_digits(int);

int main(void)
{
  printf("\n------ SUM OF DIGITS ------\n");
  int n = 0;
  printf("\n N: "); scanf("%d", &n);
  printf("\n Sum of digits of %d is %d.\n\n", n, sum_of_digits(n));

  return 0;
}

int sum_of_digits(int n)
{
  return n > 0 ? n % 10 + sum_of_digits(n / 10) : 0;
}