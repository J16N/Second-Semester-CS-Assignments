#include <stdio.h>

int main(void) {
  int a = 0, b = 0, c = 0;
  
  printf("\n------ SUM & MULTIPLICATION ------\n");
  printf(" Enter 3 numbers: "); 
  scanf("%d%d%d", &a, &b, &c);

  printf("\n Sum: %d\n Multiplication: %d\n", 
    a + b + c, a * b * c);

  return 0;
}