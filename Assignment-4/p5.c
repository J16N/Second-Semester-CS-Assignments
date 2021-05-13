#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b) 
{
    if (a == 0) return b;
    if (b == 0) return a;

    a = (int) abs(a);
    b = (int) abs(b);
    int divisor = a < b ? a : b;
    int rem = a > b ? a % b : b % a;
    int temp = rem;

    while (temp > 0) {
        rem = divisor % temp;
        divisor = temp;
        temp = rem;
    }

    return divisor;
}

int main(void)
{
  printf("\n------ GREATEST COMMON DIVISOR ------\n");

  int a = 0, b = 0;
  printf("\n Number-1: "); scanf("%d", &a);
  printf(" Number-2: "); scanf("%d", &b);
  printf("\n G.C.D of %d and %d: %d\n\n", a, b, gcd(a, b));

  return 0;
}