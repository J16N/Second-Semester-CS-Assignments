#include <stdio.h>

int main(void)
{
  printf("\n------ BINARY PATTERN ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  for (size_t i = 0, j = 0, k = 1; i < rows; k = !k)
  {
    printf("%s  %lu%s", !i ? "\n" : "", k, j + 1 == rows ? "\n" : "");
    if (i == j)
    {
      printf("\n");
      ++i;
      j = 0;
    }
    else ++j;
  }

  return 0;
}