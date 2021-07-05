#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_str(char *);
char *last_n_chars(char *, int);

int main(void)
{
  printf("\n------ EXTRACT THE LAST N CHARS ------\n");

  char *str = get_str("String");
  int n = 0;
  printf(" N: "); scanf("%d", &n);

  printf("\n Last n characters: %s\n\n", last_n_chars(str, n));

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

char *last_n_chars(char *str, int len)
{
  int size = strlen(str) - 1;
  return str + size - len + 1;
}