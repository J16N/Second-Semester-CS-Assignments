#include <stdio.h>

int main(void)
{
  printf("\n------ DIAMOND ------\n");

  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int max_star = 2 * rows - 1;

  for (int i = 0, j = 0, k = 0, l = 0; i < max_star;)
  {
    printf("%d\n", i);
    printf("%*s *", 
      !j ? 2 * ((max_star / 2 + 1) - l) : 0, "");

    if (j == k)
    {
      printf("\n");
      ++i;
      j = 0;
      if (i < rows - 1)
      {
        k += 2;
        l += 1;
      }
      else
      {
        k -= 2;
        l -= 1;
      }
    }
    else ++j;
  }

  return 0;
}