#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ SMALLEST EVEN AND LARGEST ODD ------\n");

  int size = 0;
  printf("\n Size of an array: "); scanf("%d", &size);

  int a[size], min = (int) INFINITY, max = (int) -INFINITY, temp = 0;
  printf(" Enter %d elements of the array: ", size);
  for (int i = 0; i < size; ++i) 
  {
    scanf("%d", &temp);
    if (temp % 2) max = temp > max ? temp : max;
    else min = temp < min ? temp : min;
    a[i] = temp;
  }

  printf("\n Array: [");
  for (int i = 0; i < size; ++i)
    printf("%d%s", a[i], i + 1 == size ? "]" : ", ");

  printf("\n Largest Odd: %d\n Smallest Even: %d\n\n", max, min);

  return 0;
}