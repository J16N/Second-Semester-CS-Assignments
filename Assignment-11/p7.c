#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("\n------ NO SPACE PLEASE ------\n");
  char *str = NULL;
  int c, len = 0;

  printf("\n String: ");
  
  while ((c = getchar()) != '\n')
  {
    if (c != ' ')
    {
      str = realloc(str, (len + 2) * sizeof(char));
      str[len] = c;
      len++;
    }
  }
  str[len] = '\0';

  printf("\n Result String: %s\n\n", str);
  
  free(str);
  return 0;
}