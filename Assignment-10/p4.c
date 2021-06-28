#include <stdio.h>

int main(void)
{
  printf("\n------ NUMBER OF ZEROES & NON-ZEROES ------\n");

  int row = 0, col = 0;
  printf("\n Enter Rows and Columns: ");
  scanf("%d%d", &row, &col);
  int mat[row][col];

  printf(" Matrix: ");
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      scanf("%d", &mat[i][j]);

  printf("\n Input Matrix: \n");
  for(int i = 0; i < row; ++i)
  {
    for (int j = 0; j < col; ++j)
      printf("  %3d", mat[i][j]);

    printf("\n");
  }

  int zeroes = 0;
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      if (!mat[i][j]) ++zeroes;

  printf("\n Number of Zeroes: %d", zeroes);
  printf("\n Number of Non-Zeroes: %d\n\n", (row * col) - zeroes);

  return 0;
}