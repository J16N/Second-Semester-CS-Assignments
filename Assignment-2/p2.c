#include <stdio.h>

int main(void) {
  double grade = 0;

  printf("\n------ PROBLEM - 2 ------\n");
  printf(" Grade: "); scanf("%lf", &grade);

  if (grade <= 100 && grade >= 0) {
    printf("\n Received Grade: ");
    if (grade <= 100 && grade >= 90) printf("O\n\n");
    else if (grade < 90 && grade >= 80) printf("E\n\n");
    else if (grade < 80 && grade >= 70) printf("A\n\n");
    else if (grade < 70 && grade >= 60) printf("B\n\n");
    else if (grade < 60 && grade >= 50) printf("C\n\n");
    else if (grade < 50 && grade >= 40) printf("D\n\n");
    else printf("F (Failed)\n\n");
  }
  else printf("\n Invalid Input.\n\n");

  return 0;
}