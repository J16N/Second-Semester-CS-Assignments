#include <stdio.h>
    
int main(void) {
  size_t year = 0;
    
  printf("\n ------ PROBLEM - 4 ------\n");
  printf(" Year: "); scanf("%lu", &year);

  printf("\n %lu is%sa leap year.\n\n", year,
    (!(year % 4) && (year % 100)) || !(year % 400) ? " " : " not ");
    
  return 0;
}