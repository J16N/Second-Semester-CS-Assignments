#include <stdio.h>

int fib_gen(void)
{
  int static a = 0, b = 1, count = 0, temp = 0;
  if (count == 0 || count == 1) return count++;
  if (a) temp = a;
  a += b;
  b = temp > 0 ? temp : 1;
  return a;
}

int main(void)
{
  int num = 0;
  do num = fib_gen();
  while (num < 15 && printf("%d ", num));
  printf("\n\n");

  return 0;
}