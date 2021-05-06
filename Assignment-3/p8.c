#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *tens[] = {
  [2] = "Twenty", [3] = "Thirty", [4] = "Forty",
  [5] = "Fifty", [6] = "Sixty", [7] = "Seventy",
  [8] = "Eighty", [9] = "Ninety"
};

char *ones_and_teens[] = {
  [0] = "Zero", [1] = "One", [2] = "Two", [3] = "Three",
  [4] = "Four", [5] = "Five", [6] = "Six", [7] = "Seven",
  [8] = "Eight", [9] = "Nine", [10] = "Ten", [11] = "Eleven",
  [12] = "Twelve", [13] = "Thirteen", [14] = "Fourteen", [15] = "Fifteen",
  [16] = "Sixteen", [17] = "Seventeen", [18] = "Eighteen", [19] = "Nineteen"
};

void num_to_words(int num) {
  if (num < 0)
    printf("Minus ");
    
  num = abs(num);
  int length = num > 0 ? log10(num) : 0;
    
  switch (length)
  {
    case 0:
    case 1:
      if (num < 20) {
        printf("%s ", ones_and_teens[num]);
        num = 0;
      } 
      else {
        int place = pow(10, 1);
        printf("%s ", tens[num / place]);
        num %= place;
      }
      break;

    default:
      printf("This number is too big!");
      num = 0;
  }
  if (num) num_to_words(num);
}

int main(int argc, char *argv[])
{
  int num = 0;
  printf("Enter a number: "); scanf("%d", &num);
  num_to_words(num);
  printf("\n\n");

  return 0;
}