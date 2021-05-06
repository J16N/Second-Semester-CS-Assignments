#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
  for (size_t i = 2; i <= sqrt(n); ++i)
    if (!(n % i)) return 0;

  return 1;
}

int main(void)
{
  printf("\n------ PRIME NUMBERS ------\n");
  printf("\n The prime numbers between 2 - 17:\n ");
  for (size_t i = 2; i <= 17; ++i)
    if (is_prime(i)) 
      printf("%lu%s", i, i == 17 ? "\n\n" : " ");

  return 0;
}