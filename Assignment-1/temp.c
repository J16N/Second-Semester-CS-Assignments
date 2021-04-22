#include <stdio.h>

int main(void) {
  float temp = 0.0f;

  printf("\n------ FARENHEIT TO CENTIGRADE ------\n");
  printf(" Temperature (in °F): "); scanf("%f", &temp);

  printf("\n Temperature (in °C): %g\n", 
    (temp - 32.0f) * (5.0f / 9.0f));

  return 0;
}