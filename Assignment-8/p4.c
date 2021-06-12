#include <stdio.h>

void sort(int [], int);

int main(void)
{
  printf("\n------ SORT IN ASCENDING ORDER ------\n");

  int size = 0;
  printf("\n Size of an array: "); scanf("%d", &size);

  int a[size];
  printf(" Enter %d elements of the array: ", size);
  for (int i = 0; i < size; ++i) scanf("%d", &a[i]);

  printf("\n Array: [");
  for (int i = 0; i < size; ++i)
    printf("%d%s", a[i], i + 1 == size ? "]\n" : ", ");

  sort(a, size);

  printf("\n Sorted Array: [");
  for (int i = 0; i < size; ++i)
    printf("%d%s", a[i], i + 1 == size ? "]\n\n" : ", ");

  return 0;
}

void sort(int a[], int size)
{
  for (int i = 1; i < size; ++i)
  {
    int key = a[i];
    int j = i - 1;

    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      --j;
    }

    a[j + 1] = key;
  }
}