#include <stdio.h>

int main(void)
{
  printf("\n------ S PATTERN ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    for(int j = 0; j < rows; ++j)
      printf(" %s", !i || i == rows - 1 || j == i ? "o" : " ");

    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}