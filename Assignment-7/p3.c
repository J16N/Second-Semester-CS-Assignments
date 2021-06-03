#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("\n------ ODD EVEN ELEMENTS IN ARRAY ------\n");

  int size = 0;
  printf("\n Size: "); scanf("%d", &size);

  int a[size];
  printf(" Enter elements: ");
  for (int i = 0; i < size; ++i)
    scanf("%d", &a[i]);

  int odd = 0, even = 0;
  for (int i = 0; i < size; ++i)
  {  
    if (a[i] % 2) odd += a[i];
    else even += a[i];
  }

  printf("\n Sum of Odd Numbers: %d\n Sum of Even Numbers: %d\n Difference: %d\n\n", 
    odd, even, abs(odd - even));

  return 0;
}