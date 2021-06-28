#include <stdio.h>

void matrix_add(int row, int col, int matrix_1[][col], int matrix_2[][col], int result[][col])
{
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      result[i][j] = matrix_1[i][j] + matrix_2[i][j];
}

void display_add(int row, int col, int matrix_1[][col], int matrix_2[][col], int result[][col])
{
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < col; ++j)
      printf(" %3d", matrix_1[i][j]);

    printf(" %s ", i == (row - 1) / 2 ? "  +  " : "     ");

    for (int j = 0; j < col; ++j)
      printf(" %3d", matrix_2[i][j]);
    
    printf(" %s ", i == (row - 1) / 2 ? "  =  " : "     ");

    for (int j = 0; j < col; ++j)
      printf(" %3d", result[i][j]);

    printf("\n");
  }
}

int main(void)
{
  printf("\n------ MATRIX ADDITION ------\n");
  
  int row = 0, col = 0;
  printf("\n Enter Row and Column of Matrix: ");
  scanf("%d%d", &row, &col);
  
  int matrix_1[row][col];
  int matrix_2[row][col];
  int result[row][col];

  printf(" Matrix-1: ");
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      scanf("%d", &matrix_1[i][j]);

  printf(" Matrix-2: ");
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; ++j)
      scanf("%d", &matrix_2[i][j]);

  matrix_add(row, col, matrix_1, matrix_2, result);
  display_add(row, col, matrix_1, matrix_2, result);

  return 0;
}