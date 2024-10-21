#include <stdio.h>

int main() {
  int lista[3][3];
  int suma = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Dame el numero que va en el indice [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &lista[i][j]);
    }
  }
  
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      suma += lista[i][j];
    }
  }

  printf("La suma de los elementos de la matriz es igual a: %d\n", suma);
  
  return 0;
}
