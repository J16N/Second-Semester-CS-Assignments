#include <stdio.h>

int factorial(int);
int get_value(int);

int main(void)
{
  printf("\n------ SERIES CALCULATION ------\n");
  printf("\n The value of 1! + 2! + 3! + 4! + 5! + 6! + 7! = %d\n\n", get_value(7));

  return 0;
}

int factorial(int n)
{
  return n > 1 ? n * factorial(n - 1) : 1;
}

int get_value(int n)
{
  return n > 1 ? factorial(n) + get_value(n - 1) : 1;
}