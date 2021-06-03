#include <stdio.h>

void sort(int [], int);
void display_array(int [], int);

int main(void)
{
  printf("\n------ SORT AND INSERT ARRAY ------\n");

  int size_1 = 0;
  printf("\n Array - 1 size: "); scanf("%d", &size_1);

  int a_1[size_1];
  printf(" Array - 1: ");
  for (int i = 0; i < size_1; ++i)
    scanf("%d", &a_1[i]);


  int size_2 = 0;
  printf("\n Array - 2 size: "); scanf("%d", &size_2);

  int a_2[size_2];
  printf(" Array - 2: ");
  for (int i = 0; i < size_2; ++i)
    scanf("%d", &a_2[i]);

  sort(a_1, size_1);
  sort(a_2, size_2);

  display_array(a_1, size_1);
  display_array(a_2, size_2);

  int a_3[size_1 + size_2];
  for (int i = 0, j = 0, k = 0; k < size_1 + size_2; ++k)
  {
    if (a_1[i] < a_2[j])
    {
      a_3[k] = a_1[i];
      ++i;
    }
    else
    {
      a_3[k] = a_2[j];
      ++j;
    }
  }

  display_array(a_3, size_1 + size_2);
  printf("\n\n");

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

void display_array(int a[], int size)
{
  static int n = 1;
  printf("\n Array - %d: ", n);

  for (int i = 0; i < size; ++i)
    printf("%d, ", a[i]);

  ++n;
}