#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char *get_str(char *);
bool is_palindrome(char *, int);
char *reverse_str(char *, int);

int main(void)
{
  printf("\n------ STRING PALINDOME CHECKER ------\n");

  char *str = get_str("String");
  int size = strlen(str);
  printf("\n Reversed String: %s", reverse_str(str, size));
  printf("\n Palindrome: %s\n\n", is_palindrome(str, size) ? "YES" : "NO");

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

char *reverse_str(char *str, int size)
{
  for (int i = 0; i < (size - 1) / 2; ++i)
  {
    char temp = str[i];
    str[i] = str[size - i - 1];
    str[size - i - 1] = temp;
  }
  return str;
}

bool is_palindrome(char *str, int size)
{
  for (int i = 0; i < (size - 1) / 2; ++i)
    if (str[i] != str[size - i - 1])
      return false;

  return true;
}