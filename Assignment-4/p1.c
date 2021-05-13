#include <stdio.h>
#include <math.h>

int fact(int n)
{
  return n > 1 ? n * fact(n - 1) : 1;
}

int main(void)
{
  printf("\n------ SERIES ------\n");
  
  int result = 0;
  for (size_t i = 1; i <= 7; ++i)
    result += pow(-1, i - 1) * fact(i);

  printf("\n The sum of the given series"
    "\n 1! - 2! + 3! - ... + 7!");
  printf("\n\n Ans: %d\n\n", result);

  return 0;
}