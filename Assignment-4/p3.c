#include <stdio.h>

int fact(int n)
{
  return n > 1 ? n * fact(n - 1) : 1;
}

int is_strong(int n)
{
  if (n == 0) return 1;
  int sum = 0, temp = n;
  while (temp > 0)
  {
    sum += fact(temp % 10);
    temp /= 10;
  }
  return sum == n;
}

int main(void)
{
  printf("\n------ STRONG NUMBER ------\n");

  int num = 0;
  printf("\n Number: "); scanf("%d", &num);
  printf("\n The number %d is%sa strong number.\n\n", 
    num, is_strong(num) ? " " : " not ");

  return 0;
}