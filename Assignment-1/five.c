#include <stdio.h>

int main(void) {
  int num = 0;

  printf("\n------ DIVISIBILITY BY FIVE ------\n");
  printf(" Number: "); scanf("%d", &num);

  printf("\n The number %d is%sdivisible by 5.\n", 
    num, num % 5 ? " not " : " ");

  return 0;
}