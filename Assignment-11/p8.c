#include <stdio.h>
#include <stdlib.h>

char *get_str(char *);

int main(void)
{
  printf("\n------ SORT NAMES OF STUDENTS ------\n");

  char **names = NULL;
  int len = 0;
  

  

  return 0;
}

char *get_str(char *label)
{
  printf("\n %s: ", label);

  char *str = NULL;
  int c, s = 0;

  while ((c = getchar()) != '\n')
  {
    str = realloc(str, (s + 2) * sizeof(char));
    str[s] = c;
    ++s;
  }
  str[s] = '\0';

  return str;
}