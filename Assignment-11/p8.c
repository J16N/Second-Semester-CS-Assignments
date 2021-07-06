#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOLOWER(c) ((c) >= 'A' && (c) <= 'Z' ? (c) - 'A' + 'a' : (c))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

char *get_name(int *);
char **bubble_sort(char **, int);
int cmp_str(char *, char *);

int main(void)
{
  printf("\n------ SORT NAMES OF STUDENTS ------\n");

  printf("\n Enter the names per line. Hit Ctrl + D when done:\n");

  char **names = NULL;
  int len = 0, c;
  
  do
  {
    printf(" %d) ", len + 1);
    names = realloc(names, (len + 1) * sizeof(char *));
    char *temp = get_name(&c);
    if (temp != NULL)
    {
      names[len] = temp;
      len++;
    }
  } while (c != EOF);

  names = bubble_sort(names, len);

  printf("\n\n Names sorted lexicographically: \n");
  for (int i = 0; i < len; ++i)
  {
    printf("\n %d) %s%s", i + 1, names[i], i + 1 == len ? "\n\n" : "");
    free(names[i]);
  }
  free(names);

  return 0;
}

char *get_name(int *c)
{
  char *str = NULL;
  int s = 0;

  while ((*c = getchar()) != '\n' && *c != EOF)
  {
    str = realloc(str, (s + 2) * sizeof(char));
    str[s] = *c;
    ++s;
  }
  if (str != NULL) str[s] = '\0';

  return str;
}

char **bubble_sort(char **names, int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    for (int j = 0; j < size - i - 1; ++j)
    {
      if (cmp_str(names[j], names[j + 1]) == 1)
      {
        char *temp = names[j];
        names[j] = names[j + 1];
        names[j + 1] = temp;
      }
    }
  }
  return names;
}

int cmp_str(char *s1, char *s2)
{
  int s1_len = strlen(s1), s2_len = strlen(s2);
  for (int i = 0; i < MAX(s1_len, s2_len); ++i)
  {
    char a = TOLOWER(i < s1_len ? s1[i] : s1[s1_len - 1]);
    char b = TOLOWER(i < s2_len ? s2[i] : s2[s2_len - 1]);
    if (a > b) return 1;
    if (a < b) return -1;
  }
  return 0;
}