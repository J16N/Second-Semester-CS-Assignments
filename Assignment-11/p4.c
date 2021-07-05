#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("\n------ NUMERIC ONLY! ------\n");
  
  printf("\n String: ");
  
  char *str;
  int c, len = 0;

  while ((c = getchar()) != '\n')
  {
    if (c >= '0' && c <= '9')
    {
      str = realloc(str, (len + 2) * sizeof(char));
      str[len] = c;
      ++len;
    }
  }
  str[len] = '\0';

  printf("\n Output String: %s\n\n", str);

  return 0;
}