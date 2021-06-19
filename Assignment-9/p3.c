#include <stdio.h>

int factorial(int);

int main(void)
{
  printf("\n------ FACTORIAL ------\n");
  int n = 0;
  printf("\n N: "); scanf("%d", &n);
  printf("\n The factorial of %d is %d.\n\n", n, factorial(n));

  return 0;
}

int factorial(int n)
{
  return n > 1 ? n * factorial(n - 1) : 1;
}