#include <stdio.h>

int main(void)
{
  printf("\n------ TRANSPOSE OF A MATRIX ------\n");

  int row = 0, col = 0;
  printf("\n Enter Row and Column: ");
  scanf("%d%d", &row, &col);
  int matrix[row][col];
  int t_matrix[col][row];

  printf(" Matrix: ");
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      scanf("%d", &matrix[i][j]);

  printf("\n Input Matrix: \n");
  for(int i = 0; i < row; ++i)
  {
    for (int j = 0; j < col; ++j)
      printf("  %3d", matrix[i][j]);

    printf("\n");
  }

  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      t_matrix[j][i] = matrix[i][j];

  printf("\n Transpose of a matrix: \n");
  for(int i = 0; i < col; ++i)
  {
    for (int j = 0; j < row; ++j)
      printf("  %3d", t_matrix[i][j]);

    printf("\n");
  }

  printf("\n\n");

  return 0;
}