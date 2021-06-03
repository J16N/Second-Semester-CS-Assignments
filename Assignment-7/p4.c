#include <stdio.h>

int main(void)
{
  printf("\n------ LINEAR SEARCH ------\n");

  int size = 0;
  printf("\n Size: "); scanf("%d", &size);

  int a[size];
  printf(" Enter elements: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  int el = 0, found = 0;
  printf(" Element to search: "); scanf("%d", &el);
  for (int i = 0; i < size; ++i)
  {
    if (a[i] == el) {
      printf("\n Found element %d at index %d.\n\n", el, i);
      found = 1;
      break;
    }
  }
  if (!found) printf("\n Element %d not found.\n\n", el);

  return 0;
}