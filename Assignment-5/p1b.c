#include <stdio.h>

int main(void)
{
  printf("\n------ Z PATTERN ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    for (int j = 0; j < rows; ++j)
      printf("%s ", !i || j == rows - i - 1 || i == rows - 1 ? " *" : "  ");
    
    printf("\n\n");
  }

  return 0;
}