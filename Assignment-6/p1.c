#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ PATTERN - I ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int space = log10(rows) + 3;

  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    for (int j = 0; j < rows; ++j)
    {
      if (!j || j == rows - 1 || !i || i == rows - 1)
        printf(" %*s%*d", j == rows - 1 ? 2 : 0, "", j == rows - 1 ? -space : space, i + 1);
      else printf(" %*s%*s", j == rows - 1 ? 2 : 0, "", space, " ");
    }

    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}