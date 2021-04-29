#include <stdio.h>
#include <math.h>

int main(void) {
  printf("\n--------- PROBLEM - 5 ---------\n");
  printf("\n ********* OPERATIONS *********");
  printf("\n ** <1>  Addition            **");
  printf("\n ** <2>  Subtraction         **");
  printf("\n ** <3>  Multiplication      **");
  printf("\n ** <4>  Division            **");
  printf("\n ** <5>  Exponentiation      **");
  printf("\n ** <6>  Logarithm           **");
  printf("\n ** <0>  EXIT                **");
  printf("\n ******************************\n\n");

  int input = 163553, base = 10;
  double ans = 0, num = 0, temp = 0;

  while (input) {
    printf(" Operation: "); scanf("%d", &input);
    if (!input) break;

    printf("\n Number: "); scanf("%lf", &num);

    switch (input) {
      case 1:
        printf(" Number: ");
        scanf("%lf", &temp);
        num += temp;
        break;

      case 2:
        printf(" Number: ");
        scanf("%lf", &temp);
        num -= temp;
        break;

      case 3:
        printf(" Number: ");
        scanf("%lf", &temp);
        num *= temp;
        break;

      case 4:
        printf(" Number: ");
        scanf("%lf", &temp);
        num /= temp;
        break;

      case 5:
        printf(" Power: "); 
        scanf("%lf", &temp);
        num = pow(num, temp);
        break;

      case 6:
        printf(" Base: ");
        scanf("%d", &base);
        num = log10(num) / log10(base);
        break;

      default:
        continue;
    }
    printf(" Result: %g", num);
    if (input != 0) ans += num;
    printf("\n\n Final Ans: %g\n\n", ans);
  }

  return 0;
}