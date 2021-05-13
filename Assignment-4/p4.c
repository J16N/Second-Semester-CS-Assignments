#include <stdio.h>
#include <math.h>

int perf(int n)
{
  if (n == 1) return 1;
  int sum = 1;
  for (size_t i = 2; i < sqrt(n); ++i)
  {
    if (!(n % i))
    {
      sum += i;
      sum += n / i;
    }
  }
  return sum == n;
}

int mul_perf(int n)
{
  int sum = 1;
  for (size_t i = 1; i < sqrt(n); ++i)
  {
    if (!(n % i))
    {
      sum *= i;
      sum *= n / i;
    }
  }
  return sum == pow(n, 2);
}

int main(void)
{
  printf("\n------ PERFECT & MULTIPLICATIVE PERFECT NUMBER ------\n");

  int num = 0;
  printf("\n Number: "); scanf("%d", &num);
  
  if (num > 0)
  {
    int is_perf = perf(num), 
        is_mul_perf = mul_perf(num);
    printf("\n The number %d is ", num);  
    if (is_perf && is_mul_perf) 
      printf("both perfect and multiplicative perfect number.\n\n");
    else if (is_perf) 
      printf("a perfect number.\n\n");
    else if (is_mul_perf) 
      printf("a multiplicative perfect number.\n\n");
    else 
      printf("neither perfect nor a multiplicative perfect number.\n\n");
  }
  else
    printf("\n The number must be greater than 0.\n\n");

  return 0;
}