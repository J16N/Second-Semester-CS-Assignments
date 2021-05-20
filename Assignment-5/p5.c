#include <stdio.h>

int main(void)
{
  printf("\n------ I PATTERN ------\n");
  
  int rows = 0;
  printf("\n N: "); scanf("%d", &rows);
  
  rows = 2 * rows + 1;

  for (int i = 0, j = 0; i < rows; ++i, j = i > (rows - 1) / 2 ? rows - i - 1 : i)
  {
    if (!i) printf("\n");

    for(int k = 0; k < rows; ++k)
      printf("   %s", k >= j && k < rows - j ? "*" : " ");

    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}