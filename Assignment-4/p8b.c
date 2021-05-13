#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ NUMBER PATTERN ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);
  printf("\n");

  int digits = log10((rows * (rows + 1) / 2) - 1) + 3;

  for (int i = 0, j = 0, k = 0; i < rows; ++k)
  {
    printf("%*s%*d%s", !j ? digits * (rows - i - 1) : 0, "", 
      digits, k, j + 1 == rows ? "\n" : "");
    
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