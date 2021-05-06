#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse_num(int num)
{
  int reversed_num = 0;
  int length = log10(abs(num));
    
  while (length >= 0)
  {
    reversed_num += (num % 10) * pow(10, length);
    num /= 10;
    length--;
  }

  return reversed_num;
}

int main(void)
{
    int num = 0;
    
    printf("\n----- REVERSE A GIVEN NUMBER -----\n");
    printf("\n Enter a number: "); scanf("%d", &num);    
    printf("\n Reversed Number: %d\n\n", reverse_num(num));
    
    return 0;
}