#include <stdio.h>

int main(void)
{
  printf("\n------ REVERSE ARRAY AND SUM OF EVEN ELEMENTS ------\n");

  int size = 0;
  printf("\n Length of an array: "); scanf("%d", &size);

  int a[size], sum = 0;
  printf("\n Enter elements of the array: ");
  for (int i = 0; i < size; ++i)
  {
    scanf("%d", &a[i]);
    if (!(a[i] % 2)) sum += a[i];
  }

  printf("\n Array: [ ");
  for (int i = 0; i < size; ++i)
    printf("%d, %s", a[i], i == size - 1 ? "]\n" : "");

  printf("\n Reversed Array: [ ");
  for (int i = size - 1; i >= 0; --i)
    printf("%d, %s", a[i], !i ? "]\n" : "");

  printf(" Sum of even elements: %d\n\n", sum);

  return 0;
}