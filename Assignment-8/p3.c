#include <stdio.h>
#include <stdlib.h>

void sort(int [], int);
int remove_dup(int [], int, int *);

int main(void)
{
  printf("\n------ REMOVE DUPLICATES ------\n");

  int size = 0;
  printf("\n Size of an array: "); scanf("%d", &size);

  int a[size];
  printf(" Enter %d elements of the array: ", size);
  for (int i = 0; i < size; ++i) scanf("%d", &a[i]);

  printf("\n Array: [");
  for (int i = 0; i < size; ++i)
    printf("%d%s", a[i], i + 1 == size ? "]\n" : ", ");

  sort(a, size);

  int *b = malloc(1 * sizeof(int));
  size = remove_dup(a, size, b);

  printf("\n New Array: [");
  for (int i = 0; i < size; ++i)
    printf("%d%s", b[i], i + 1 == size ? "]\n\n" : ", ");

  free(b);

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

int remove_dup(int a[], int size, int *b)
{
  int n_size = 0, temp;
  for (int i = 0, j = 0; i < size; ++i)
  {
    if (a[i] != temp)
    {
      n_size++;
      b = realloc(b, n_size * sizeof(int));
      temp = a[i];
      b[j] = a[i];
      j++;
    }
  }

  return n_size;
}