#include <stdio.h>
#include <math.h>
#define  PHI (1 + sqrt(5)) / 2
#define GETNFIBONACCI(n) round(pow(PHI, (n)) / sqrt(5))

int main(void)
{
  printf("\n------ FIBONACCI PATTERN ------\n");
  int rows = 0, m = 0;
  printf("\n Rows: "); scanf("%d", &rows);

  int space = log10(GETNFIBONACCI(rows - 1)) + 1;
  if (rows % 2) m = (rows - 1) / 2;
  else m = rows / 2 - 1;
  
  for (int i = 0; i < rows; ++i)
  {
    if (!i) printf("\n");

    int fib = GETNFIBONACCI(i);
    for (int j = 0; j < rows; ++j)
    {
      if (!j || j == rows - 1 || i == j || i == rows - j - 1)
        printf("%1s%*d%*s", "", 
          j > (rows - 1) / 2 ? -space : space, fib, 
          j == m ? space : 1, "");
      else
        printf("%1s%*s%*s", "", 
          space, " ", j == m ? space : 1, "");
    }

    printf("%s", i == rows - 1 ? "\n\n" : "\n");
  }

  return 0;
}