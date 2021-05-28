#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ MAXIMUM & MINIMUM ELEMENTS OF AN ARRAY ------\n");

  int size = 0;
  printf("\n Length of an array: "); scanf("%d", &size);

  float a[size], min = INFINITY, max = -INFINITY;
  printf(" Enter elements of an array: ");
  for (int i = 0; i < size; ++i)
  {
    scanf("%f", &a[i]);
    max = a[i] > max ? a[i] : max;
    min = a[i] < min ? a[i] : min;
  }

  printf("\n Array: [ ");
  for (int i = 0; i < size; ++i)
    printf("%g, %s", a[i], i == size - 1 ? "]\n" : "");

  printf("\n Maximum Element: %g\n", max);
  printf(" Minimum Element: %g\n\n", min);

  return 0;
}