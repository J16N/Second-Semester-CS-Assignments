#include <stdio.h>
#include <math.h>

int max_bin_coeff(int n);

int main(void)
{
  printf("\n------ PASCAL TRIANGLE ------\n");

  int rows = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int space = log10(max_bin_coeff(rows)) + 3;
  printf(" %d\n", max_bin_coeff(rows));

  for (int i = 1; i <= rows; ++i)
  {
    if (i == 1) printf("\n");

    int c = 1;
    for (int j = 1, k = 1; j <= rows; ++j)
    {
      if (j <= rows - i) printf("%*s", space, " ");
      else 
      {
        printf("%*d", space, c);
        c = c * (i - k) / k;
        ++k;
      }
    }
    printf("%s", i == rows ? "\n\n" : "\n");
  }

  return 0;
}

int max_bin_coeff(int n)
{
  int r = n % 2 ? (n - 1) / 2 : n / 2;
  int c = 1;
  for (int i = 1; i <= r; ++i)
    c = c * (n - i) / i; 
  return c;
}