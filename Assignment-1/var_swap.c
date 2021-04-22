#include <stdio.h>

int main(void) {
  int a = 0, b = 0;

  printf("\n------ SWAP CONTENTS OF TWO VARIABLES ------\n");
  printf(" Var-A (Number): "); scanf("%d", &a);
  printf(" Var-B (Number): "); scanf("%d", &b);

  // Swapped variables using third variable
  int c = a;
  a = b, b = c;
  printf("\n Swapped using third variable.\n");
  printf(" Var-A (Current Value): %d\n Var-B (Current Value): %d\n", a, b);

  // Swapped variables without third variable
  a = a + b, b = a - b, a = a - b;
  printf("\n Swapped without third variable.\n");
  printf(" Var-A (Current Value): %d\n Var-B (Current Value): %d\n", a, b);

  return 0;
}