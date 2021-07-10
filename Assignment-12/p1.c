#include <stdio.h>
#include <math.h>

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
  int hours, minutes, seconds;
  printf("\n Enter Time-1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &hours, &minutes, &seconds);
  t1.hours = hours % 24;
  t1.minutes = minutes % 60;
  t1.seconds = seconds % 60;
  
  printf(" Enter Time-2 (hh:mm:ss): ");
  scanf("%d:%d:%d", &hours, &minutes, &seconds);
  t2.hours = hours % 24;
  t2.minutes = minutes % 60;
  t2.seconds = seconds % 60;

  result = add(t1, t2);
  printf("\n Adding:\n %02d:%02d:%02d + %02d:%02d:%02d = %02d:%02d:%02d\n", 
    t1.hours, t1.minutes, t1.seconds,
    t2.hours, t2.minutes, t2.seconds,
    result.hours, result.minutes, result.seconds);

  result = subtract(t1, t2);
  printf("\n Subtracting:\n %02d:%02d:%02d - %02d:%02d:%02d = %02d:%02d:%02d\n\n", 
    t1.hours, t1.minutes, t1.seconds,
    t2.hours, t2.minutes, t2.seconds,
    result.hours, result.minutes, result.seconds);

  return 0;
}

MYTIME add(MYTIME a, MYTIME b)
{
  MYTIME result;
  result.seconds = (a.seconds + b.seconds) % 60;
  result.minutes = (a.minutes + b.minutes) % 60 + (a.seconds + b.seconds) / 60;
  result.hours = (a.hours + b.hours) % 24 + (a.minutes + b.minutes) / 60;
  return result;
}

MYTIME subtract(MYTIME a, MYTIME b)
{
  MYTIME result;
  int temp_s = a.seconds - b.seconds;
  result.seconds = temp_s >= 0 ? temp_s : 60 + temp_s;

  int temp_m = a.minutes - b.minutes;
  result.minutes = temp_m >= 0 ? temp_m : 60 + temp_m;
  if (temp_s < 0) 
  {
    int temp = result.minutes - 1;
    result.minutes = temp < 0 ? 60 + temp : temp;
  }

  int temp_h = a.hours - b.hours;
  result.hours = temp_h >= 0 ? temp_h : 24 + temp_h; 
  if (temp_m < 0) 
  {
    int temp = result.hours - 1;
    result.minutes = temp < 0 ? 24 + temp : temp;
  }
  
  return result;
}