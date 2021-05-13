#include <stdio.h>

int main(void)
{
  printf("\n------ HOLLOW RIGHT TRIANGLE ------\n");

  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  for (size_t i = 0, j = 0; i < rows;)
  {
    printf("%s  %s%s", !i ? "\n" : "", 
      j > 0 && j < i && i + 1 < rows ? " " : "*", 
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