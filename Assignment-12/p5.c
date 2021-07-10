#include <stdio.h>

struct Distance 
{
  int feet;
  float inches;
};

int main(void)
{
  printf("\n------ ADD DISTANCES ------\n");

  struct Distance dist;

  printf("\n Feet: ");
  scanf("%d", &dist.feet);

  printf(" INCHES: ");
  scanf("%f", &dist.inches);

  printf("\n Result: %g\n\n", dist.feet + dist.inches);

  return 0;
}