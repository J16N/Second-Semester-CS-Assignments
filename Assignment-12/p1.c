#include <stdio.h>

typedef struct time
{
  int hours,
  minutes,
  seconds;
} MYTIME;

MYTIME add(MYTIME, MYTIME);
MYTIME subtract(MYTIME, MYTIME);

int main(void)
{
  printf("\n------ TIME CALCULATION ------\n");

  MYTIME t1, t2, result;
  printf("\n Enter Time-1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);
  printf(" Enter Time-2 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);

  return 0;
}

