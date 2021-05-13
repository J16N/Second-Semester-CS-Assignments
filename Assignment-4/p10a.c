#include <stdio.h>

int main(void)
{
  printf("\n------ DIAMOND ------\n");

  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int max_star = 2 * rows - 1;

  for (int i = 0, j = 0, k = 0, l = 0; i < max_star;)
  {
    printf("%s%*s *%s", !i ? "\n" : "", !j ? 2 * ((max_star / 2 + 1) - l) : 0, 
      "", !k && i + 1 == max_star ? "\n" : "");

    if (j == k)
    {
      printf("\n");
      ++i;
      j = 0;
      k = i < rows ? k + 2 : k - 2;
      l = i < rows ? l + 1 : l - 1;
    }
    else ++j;
  }

  return 0;
}
