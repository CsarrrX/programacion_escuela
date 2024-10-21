#include <stdio.h>

int main() {
  int mat1[2][2];
  int mat2[2][2];
  int sum_mat[2][2];

  printf("Dame los elementos de la matriz 1: \n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Dame los elementos de la matriz 2: \n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }
  
  printf("La matriz resultante es: \n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      sum_mat[i][j] = mat1[i][j] + mat2[i][j];
      printf("%d ", sum_mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
