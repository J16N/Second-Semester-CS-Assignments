#include <stdio.h>

int main(void)
{
  printf("\n------ C PATTERN ------\n");
  
  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    for (int j = 0; j < rows; ++j)
      printf("%s ", !i || !j || i == rows - 1 ? " c" : " ");
    
    printf("\n\n");
  }

  return 0;
}