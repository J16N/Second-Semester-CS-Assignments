#include <stdio.h>

int main(void)
{
  printf("\n------ NUMBER OF OCCURENCE ------\n");

  int size = 0;
  printf("\n Size: "); scanf("%d", &size);

  int a[size];
  printf(" Enter elements: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  int el = 0;
  printf(" Enter element: "); scanf("%d", &el);

  int occurence = 0;
  for (int i = 0; i < size; ++i)
    if (a[i] == el) ++occurence;

  printf("\n Occurence of element %d: %d\n\n", el, occurence);

  return 0;
}