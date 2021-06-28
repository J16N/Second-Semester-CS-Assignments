#include <stdio.h>

int oddEvenSum(int *, int, int *);

int main(void)
{
  printf("\n------ ODD EVEN SUM USING POINTER ------\n");

  int size = 0;
  printf("\n Size of array: ");
  scanf("%d", &size);

  int a[size];

  printf(" Array: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  printf("\n Input Array: [");
  for (int i = 0; i < size; ++i)
    printf(" %d,%s", a[i], i == size - 1 ? " ]" : "");

  int odd = 0;
  int total = oddEvenSum(a, size, &odd);
  printf("\n\n Sum of all the odd elements: %d", odd);
  printf("\n Sum of all the even elements: %d\n\n", total - odd);

  return 0;
}

int oddEvenSum(int *a, int size, int *odd)
{
  int total = 0;
  for (int i = 0; i < size; ++i)
  {
    total += a[i];
    if (a[i] % 2) *odd += a[i];
  }
  return total;
}