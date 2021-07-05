#include <stdio.h>
#include <stdlib.h>

char *get_string(char *label)
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

char *str_concat(char *str1, char *str2)
{
  int len = 0;
  while (str1[len] != '\0') ++len;

  while (*str2 != '\0')
  {
    str1 = realloc(str1, (len + 2) * sizeof(char));
    str1[len] = *str2++;
    ++len;
  }
  str1[len] = '\0';

  return str1;
}

int main(void)
{
  printf("\n------ STRING CONCATENATION ------\n");
  
  char *str1 = get_string("String-1");
  char *str2 = get_string("String-2");
  printf("\n After concatenation: %s\n\n", str_concat(str1, str2));

  return 0;
}