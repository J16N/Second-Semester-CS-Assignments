#include <stdio.h>

int main(void) {
  int num = 0;

  printf("\n------ ODD EVEN CHECKER ------\n");
  printf(" Number: "); scanf("%d", &num);

  printf("\n The number %d is %s.\n", num, num % 2 ? "odd" : "even");

  return 0;
}