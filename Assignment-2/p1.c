#include <stdio.h>

int main(void) {
  int n = 0;
  double x = 0;

  printf("\n------ PROBLEM - 1 ------\n");
  printf(" N: "); scanf("%d", &n);
  printf(" X: "); scanf("%lf", &x);
  
  if (n >= 1) printf(" Y(%g, %d) = ", x, n);

  switch (n) {
    case 1:
      printf("1 + %g^2 = %g\n\n", x, 1 + x * x);
      break;

    case 2:
      printf("1 + (%g / %d) = %g\n\n", x, n, 1 + x / n);
      break;

    case 3:
      printf("1 + (2 * %g) = %g\n\n", x, 1 + 2 * x);
      break;

    default:
      printf("\n Wrong Input.\n\n");
      break;
  }

  return 0;
}