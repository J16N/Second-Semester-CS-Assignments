#include <stdio.h>

int main(void)
{
  printf("\n------ REVERSE ARRAY ------\n");

  int size = 0;
  printf("\n Size: "); scanf("%d", &size);

  int a[size];
  printf(" Enter elements: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  for (int i = 0; i < size / 2; ++i)
  {
    int temp = a[i];
    a[i] = a[size - i - 1];
    a[size - i - 1] = temp;
  }

  printf("\n Reversed Array: ");
  for (int i = 0; i < size; ++i)
    printf("%d,%s", a[i], i + 1 == size ? "\n\n" : " ");

  return 0;
}