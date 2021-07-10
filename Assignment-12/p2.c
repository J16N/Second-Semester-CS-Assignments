#include <stdio.h>
#define TOLOWER(n) (n) >= 'A' && (n) <= 'Z' ? (n) -'A' + 'a' : (n)
#define ISVOWEL(n) (n) == 'a' || (n) == 'e' || (n) == 'i' || (n) == 'o' || (n) == 'u'

int main(void)
{
  printf("\n------ FILE COPIER ------\n");

  FILE *source = fopen("./p2-source.txt", "r"), 
    *target = fopen("./p2-target.txt", "w+");

  if (source && target )
  {
    printf("\n Copying files...");

    int ch, vowels = 0, spaces = 0;
    while ((ch = fgetc(source)) != EOF)
    {
      if (ch == ' ') spaces++;
      if (ISVOWEL(TOLOWER(ch))) vowels++;
      fputc(ch, target);
    }

    printf("\n Successfully copied files.");
    printf("\n No. of vowels: %d", vowels);
    printf("\n No. of spaces: %d\n\n", spaces);

  }

  if (source) fclose(source);
  if (target) fclose(target);

  return 0;
}