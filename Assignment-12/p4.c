#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  printf("\n------ LARGEST NUMBER ------\n");

  if (argc < 3)
  {
    printf("\n TOO FEW ARGUMETS.");
    printf("\n USAGE: <program_name> <arg> <arg> ... <arg>\n\n");
    return 1;
  }

  int max = (int) -INFINITY;
  for (int i = 1; i < argc; ++i)
  {
    int num = atoi(argv[i]);
    max = max < num ? num : max;
  }
  
  printf("\n Largest Number: %d", max);

  if (argc == 3)
  {
    int a = atoi(argv[2]);
    int b = atoi(argv[1]);
    printf("\n Difference: %d ~ %d = %d\n\n", b, a, abs(b - a));
  }

  return 0;
}