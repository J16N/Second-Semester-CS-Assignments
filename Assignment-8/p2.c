#include <stdio.h>
#include <stdbool.h>

int factorial(int, int);
bool linear_search(int [], int, int);

int main(void)
{
  printf("\n------ FACTORIAL FINDER ------\n");

  int size = 0;
  printf("\n Size of an array: "); scanf("%d", &size);

  int a[size];
  printf(" Enter %d elements of the array: ", size);
  for (int i = 0; i < size; ++i) scanf("%d", &a[i]);

  printf("\n Array: [");
  for (int i = 0; i < size; ++i)
    printf("%d%s", a[i], i + 1 == size ? "]\n" : ", ");

  int fact = 0;
  for (int i = 0; i < size; ++i)
  {
    if (a[i] >= 0)
    {
      fact = factorial(a[i], 1);
      printf(" Factorial of %d is %d which is %s.\n", a[i], fact, 
        linear_search(a, size, fact) ? "present" : "absent");
    }
    else printf(" Factorial of %d cannot be calculated.\n", a[i]);
  }

  return 0;
}

int factorial(int n, int acc)
{
  return !n ? acc : factorial(n - 1, acc * n);
}

bool linear_search(int a[], int size, int b)
{
  for (int i = 0; i < size; ++i)
    if (a[i] == b) return true;
  
  return false;
}