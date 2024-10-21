#include <stdio.h>

int main() {
  int mat[3][3];
  int num[10];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Dame un numero para la posicion [%d][%d]: \n", i, j);
      scanf("%d", &mat[i][j]);
    }
  }

  for(int i = 0; i < 10; i++) {
    num[i] = 0;
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      num[mat[i][j]]++;
    }
  }

  printf("El numero de ocurrencias de cada numero (en orden) es el siguiente: \n");

  for(int i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }

  return 0;
}
