#include <stdio.h>
#include <math.h>

int main(void) {
  double a = 0.0, b = 0.0, c = 0.0;

  printf("\n------ Triangle ------\n");
  printf(" Enter 3 sides (unit): ");
  scanf("%lf%lf%lf", &a, &b, &c);

  double s = (a + b + c) / 2;
  printf("\n Area: %g sq. unit\n", 
    sqrt(s * (s - a) * (s - b) * (s - c)));

  return 0;
}