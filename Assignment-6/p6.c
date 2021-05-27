#include <stdio.h>

int main(void)
{
  printf("\n------ INSERT ELEMENTS AT A SPECIFIC POSITION IN AN ARRAY ------\n");

  int size = 0;
  printf("\n Length of Array: "); scanf("%d", &size);

  int a[size + 1];
  printf("\n Enter elements of the array: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  printf("\n Array: [ ");
  for (int i = 0; i < size; ++i)
    printf("%d, %s", a[i], i == size - 1 ? "]\n" : "");

  int pos = 0;
  printf("\n Enter position (1 - %d): ", size + 1);
  scanf("%d", &pos);

  if (pos >= 1 && pos <= size + 1)
  {
    int val = 0;
    printf(" Enter Value: "); scanf("%d", &val);

    for (int i = size + 1; i > pos - 1; --i)
      a[i] = a[i - 1];
    
    a[pos - 1] = val;

    printf("\n Final Array: [ ");
    for (int i = 0; i < size + 1; ++i)
      printf("%d, %s", a[i], i == size ? "]\n\n" : "");
  }
  else printf("\n INVALID POSITION. \n\n");

  return 0;
}