#include <stdio.h>
#include <stdlib.h>
#define TOLOWER(n) (n) >= 'A' && (n) <= 'Z' ? (n) -'A' + 'a' : (n)
#define ISVOWEL(n) (n) == 'a' || (n) == 'e' || (n) == 'i' || (n) == 'o' || (n) == 'u'

int main(void)
{
  printf("\n------ NUMBER OF VOWELS ------\n");
  
  int vowels[] = { ['a'] = 0, ['e'] = 0, ['i'] = 0, ['o'] = 0, ['u'] = 0 };
  int c_vow = 0;

  printf("\n String: ");
  
  char *str = NULL;
  int c, len = 0;

  while ((c = getchar()) != '\n')
  {
    str = realloc(str, (len + 2) * sizeof(char));
    str[len] = c == ';' ? '@' : c;
    c = TOLOWER(c);
    if (ISVOWEL(c))
    {
      if (!vowels[c]) c_vow++;
      vowels[c]++;
    }
    len++;
  }
  str[len] = '\0';

  printf("\n Result String: %s\n", str);
  printf(" Total unique vowels: %d\n\n", c_vow);
  
  free(str);
  return 0;
}