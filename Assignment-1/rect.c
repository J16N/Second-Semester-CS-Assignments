#include <stdio.h>
#include <math.h>

int main(void) {
  double l = 0, b = 0;

  printf("\n------ RECTANGLE ------\n");
  printf(" Length (unit): "); scanf("%lf", &l);
  printf(" Breadth (unit): "); scanf("%lf", &b);

  printf("\n Area: %g sq. unit\n Perimeter: %g unit\n Diagonal: %g unit\n", 
    l * b, 2 * (l + b), sqrt(pow(l, 2) + pow(b, 2)));

  return 0;
}