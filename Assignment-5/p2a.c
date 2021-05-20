#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ NUMBER TRIANGLE ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int space = log10(rows) + 3;

  for (int i = 1; i <= rows; ++i)
  {
    if (i == 1) printf("\n");

    for (int j = i; j > 0; --j)
      printf("%*d", space, j);
    
    printf("%s", i == rows ? "\n\n" : "\n");
  }

  return 0;
}