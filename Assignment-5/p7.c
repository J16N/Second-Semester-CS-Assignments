#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("\n------ LETTER PATTERN ------\n");
  
  int rows = 0;
  printf("\n N: "); scanf("%d", &rows);
  
  rows = 2 * rows + 1;
  int mid = (rows - 1) / 2;

  for (int i = 0, j = 0; i < rows; ++i, j = i > mid ? rows - i - 1 : i)
  {
    if (!i) printf("\n");

    for(int k = 0, c = 65; k < rows; ++k, k > mid ? --c : ++c)
    {
      int t = k > mid ? rows - k - 1 : k;
      printf("   %c", t <= mid - j ? c : ' ');
    }

    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}