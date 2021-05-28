#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ NUMBER I PATTERN ------\n");

  int n = 0;
  printf("\n N: "); scanf("%d", &n);

  int rows = 2 * n + 1;
  int space = log10(rows) + 2;
  n = (rows + 1) / 2;

  for (int i = 1, c_row = 1, count = rows - 1, p_count = 1; i <= rows; ++i)
  {
    if (i == 1) printf("\n");

    for (int j = 1; j <= rows; ++j)
    {
      if (j >= c_row && j <= rows - c_row + 1)
        printf(" %*d", space, i >= n ? count + p_count : count);
      else printf(" %*s", space, " ");
    }

    printf("%s", i == rows ? "\n\n" : "\n");

    count = i >= n ? count + 1 : count - 2;
    i >= n ? ++p_count : p_count;
    i >= n ? --c_row : ++c_row;
  }

  return 0;
}