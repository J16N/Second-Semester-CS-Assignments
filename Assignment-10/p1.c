#include <stdio.h>

int sum(int *, int);

int main(void)
{
  printf("\n------ ARRAY SUM ------\n");

  int size = 0;
  printf("\n Size of array: ");
  scanf("%d", &size);

  int a[size];
  printf(" Array: ");
  for (int i = 0; i < size; ++i) scanf("%d", &a[i]);

  printf("\n Sum = %d.\n\n", sum(a, size));

  return 0;
}

int sum(int *a, int n)
{
  int sum = 0;
  while (n--) sum += a[n];
  return sum;
}