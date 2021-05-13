#include <stdio.h>
#include <math.h>

int is_armstrong(int n)
{
  if (n == 0) return 1;

  int digits = log10(n) + 1, 
      temp = n, sum = 0;

  while (temp > 0)
  {
    sum += pow(temp % 10, digits);
    temp /= 10;
  }

  return n == sum;
}

int main(void)
{
  printf("\n------ ARMSTRONG NUMBER ------\n");

  int num = 0;
  printf("\n Number: "); scanf("%d", &num);

  if (num >= 0)
    printf("\n The number %d is%san armstrong number.\n\n", 
      num, is_armstrong(num) ? " " : " not ");
  else
    printf("\n You must enter a positive number.\n\n");

  return 0;
}