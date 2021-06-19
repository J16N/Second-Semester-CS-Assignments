#include <stdio.h>

int fibo(int n);
void disp_fibo(int n);

int main(void)
{
  printf("\n------ FIBONACCI SERIES ------\n");
  int n = 0;
  printf("\n Enter the number of terms: ");
  scanf("%d", &n);

  printf("\n The fibonacci series upto %d terms are: \n", n);
  disp_fibo(n);

  return 0;
}

int fibo(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibo(n - 1) + fibo(n - 2);
}

void disp_fibo(int n)
{
  if (n > 0) 
  {
    printf(" %d", fibo(n - 1));
    return disp_fibo(n - 1);
  }
  else printf("\n\n");
}