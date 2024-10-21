#include <stdio.h>

int main() {
  int arreglo[5];

  for(int i = 0; i < 5; i++) {
    printf("Dame el numero en la posicion %d: ", i);
    scanf("%d", &arreglo[i]);
  }

  for(int i = 0; i < 5; i++) {
    printf("%d ", arreglo[i]);
  }
  
  printf("\n");

  for(int i = 4; i != -1; i--) {
    printf("%d ", arreglo[i]);
  }
  return 0;
}
