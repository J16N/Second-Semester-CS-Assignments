#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ NUMBER TRIANGLE ------\n");

  int rows = 0;
  printf(" Rows: "); scanf("%d", &rows);

  int max_num = 2 * rows - 1;
  int space = log10(max_num) + 3;

  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    for (int j = 0, k = i + 1; j < 2 * rows - 1; ++j)
    {
      if (j >= rows - i - 1 && j <= rows + i - 1)
      {
        printf(" %*d", space, k);
        j < rows - 1 ? ++k : --k;
      }
      else printf(" %*s", space, " ");
    }

    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}