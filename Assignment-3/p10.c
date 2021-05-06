#include <stdio.h>
#include <math.h>

int main(void)
{
  int n = 0, sum = 0;
  printf("\n------ SUM OF SERIES ------\n");
  printf("\n N: "); scanf("%d", &n);
  
  for (size_t cd = 2, a = 1, i = 0; i < n; cd += 2, ++i)
  {
    sum += pow(-1, i) * a;
    a += cd;
  }

  printf("\n Sum upto %d term%s: %d\n\n", n, n > 1 ? "s" : "", sum);

  return 0;
}