#include <stdio.h>

int main() {
  int importaciones[5];
  int exportaciones[5];
  int max1 = 0, max2 = 0, sum_imp = 0, sum_exp = 0;
  int indice1, indice2; 

  for(int i = 0; i < 5; i++) {
    printf("Dame la exportacion num %d: ", i + 1); 
    scanf("%d", &exportaciones[i]);
  }

  printf("\n");

  for(int i = 0; i < 5; i++) {
    printf("Dame la importacion num %d: ", i + 1); 
    scanf("%d", &importaciones[i]);
  }

  printf("\nDiferencias netas de importacion-exportacion: ");

  for(int i = 0; i < 5; i++) {
    printf("Producto %d: %d\n", i, exportaciones[i] - importaciones[i]);
  }

  for(int i = 0; i < 5; i++) {
    if(max1 < importaciones[i]) {
      max1 = importaciones[i];
      indice1 = i;
    }
    if(max2 < exportaciones[i]) {
      max2 = exportaciones[i]; 
      indice2 = i; 
    }
    sum_imp += importaciones[i];
    sum_exp += exportaciones[i];
  }

  printf("El producto con mas importacion: PRODUCTO %d con %d de importacion. \n", indice1, max1);
  printf("El producto con mas exportacion: PRODUCTO %d con %d de importacion. \n", indice2, max2);
  printf("Balance total de importaciones: %d\n", sum_imp);
  printf("Balance total de exportaciones: %d\n", sum_exp);


  return 0;
}
