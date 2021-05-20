#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ MIRRORED NUMBER TRIANGLE ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int space = log10(rows) + 3;

  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    for (int j = 0, k = i % 2 ? 1 : 2; j < rows; ++j)
    {
      if (j < rows - i - 1) printf("%*s", space, " ");
      else 
      {
        printf("%*d", space, k);
        k += 2;
      }
    }
    
    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}