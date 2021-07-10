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
  for (int i = 0; i < argc; ++i)
  {
    int num = atoi(argv[i]);
    max = max < num ? num : max;
  }
  
  printf("\n Largest Number: %d\n\n", max);
  return 0;
}