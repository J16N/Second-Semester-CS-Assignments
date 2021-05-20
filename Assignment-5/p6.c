#include <stdio.h>

int main(void)
{
  printf("\n------ I PATTERN - 2 ------\n");

  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  rows = 2 * rows - 1;
  int mid = (rows - 1) / 2;

  for (int i = 0; i <= mid; ++i)
  {
    if (!i) printf("\n");

    for (int j = 0, k = 1; j < rows; ++j, j > mid ? --k : ++k)
    {
      int t = j > mid ? rows - j - 1 : j;
      int temp = k;
      printf(" ");
      while (temp > 0) 
      {
        printf("%s", t <= mid - i ? "I" : " ");
        --temp;
      }
      printf("   ");
    }

    printf("%s", i == mid ? "\n\n" : "\n");
  }

  return 0;
}