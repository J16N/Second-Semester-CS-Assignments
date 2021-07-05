#include <stdio.h>

int main(void)
{
  printf("\n------ WORDS IN A SENTENCE ------\n");

  printf("\n Sentence: ");
  int c, count = 1;
  while ((c = getchar()) != '.')
    if (c == ' ') count++;

  printf("\n Number of words in the sentence: %d\n\n", count);

  return 0;
}