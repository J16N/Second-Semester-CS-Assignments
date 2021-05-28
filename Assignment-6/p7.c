#include <stdio.h>

int main(void)
{
  printf("\n------ REMOVE ELEMENT FROM A SPECIFIC POSITION IN AN ARRAY ------\n");

  int size = 0;
  printf("\n Length of Array: "); scanf("%d", &size);

  int a[size];
  printf("\n Enter elements of the array: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  printf("\n Array: [ ");
  for (int i = 0; i < size; ++i)
    printf("%d, %s", a[i], i == size - 1 ? "]\n" : "");

  int pos = 0;
  printf("\n Enter position (1 - %d): ", size);
  scanf("%d", &pos);

  if (pos >= 1 && pos <= size)
  {
    size = size - 1;
    int i = pos - 1;
    while (i < size)
    {
      a[i] = a[i + 1];
      ++i;
    }
    a[i] = 0;

    printf("\n Final Array: [ ");
    for (int i = 0; i < size; ++i)
      printf("%d, %s", a[i], i == size - 1 ? "]\n\n" : "");
  }
  else printf("\n INVALID POSITION. \n\n");

  return 0;
}