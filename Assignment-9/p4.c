#include <stdio.h>
#include <stdlib.h>

int *linear_search(int *, int, int, int);

int main(void)
{
  printf("\n------ LINEAR SEARCH ------\n");
  int size = 1, ch;
  int *a = malloc(size * sizeof(int));
  printf("\n Array: ");
  while ((ch = getchar()) != '\n')
  {
    if (ch >= '0' && ch <= '9')
    {
      a[size - 1] = ch - '0';
      size++;
      a = realloc(a, size * sizeof(int));
    }
  }

  int el = 0;
  printf("\n Enter the element to be searched: ");
  scanf("%d", &el);

  int *index = linear_search(a, size, 0, el);
  if (index != NULL)
    printf("\n Found element %d at position %d.\n\n", el, *index + 1);
  else
    printf("\n Could not find the element in the given array. \n\n");

  free(a);
  return 0;
}

int *linear_search(int *a, int size, int index, int el)
{
  if (index == size) return NULL;
  return a[index] == el ? &index : linear_search(a, size, ++index, el);
}