#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ SECOND MAXIMUM ELEMENT OF AN ARRAY AND NUMBER OF ITS OCCURENCE ------\n");

  int size = 0;
  printf("\n Length of an array: "); scanf("%d", &size);

  if (size >= 2)
  {
    float a[size], max = -INFINITY;
    printf("\n Enter %d elements of an array: ", size);
    for (int i = 0; i < size; ++i)
    {
      scanf("%f", &a[i]);
      max = max < a[i] ? a[i] : max;
    }

    printf("\n Array: [ ");
    for (int i = 0; i < size; ++i)
      printf("%g, %s", a[i], i == size - 1 ? "]\n" : "");

    float s_max = -INFINITY;
    for (int i = 0; i < size; ++i)
      s_max = a[i] < max && a[i] > s_max ? a[i] : s_max;

    int count = 0;
    for (int i = 0; i < size; ++i)
      if (a[i] == s_max) count++;

    printf("\n Second maximum element: %g\n", s_max);
    printf(" Occurence: %d %s\n\n", count, count > 1 ? "times" : "time");
  }
  else printf("\n Length must be greater than or equal to 2.\n\n");

  return 0;
}