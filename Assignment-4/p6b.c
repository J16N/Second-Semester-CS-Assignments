#include <stdio.h>

int main(void)
{
  printf("\n------ STAR PATTERN ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  for (int i = 0, j = 0; i < rows;)
  {
    printf("%s%*s  *%s", !i ? "\n" : "", !j ? 3 * (rows - i - 1) : 0, "", 
      j + 1 == rows ? "\n" : "");
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