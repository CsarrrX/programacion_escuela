#include <stdio.h>
#include <stdbool.h>

int main() {
  int inicio_rango, fin_rango, j, cont_primos = 0;
  bool es_primo;

  printf("Dame el numero inicial del rango: \n");
  scanf("%d", &inicio_rango);
  
  printf("Dame el numero final del rango: \n");
  scanf("%d", &fin_rango);

  printf("Los numeros primos en el rango son: \n");
  
  for (int i = inicio_rango; i <= fin_rango; i++) {
    if (i < 2) {
      continue;  
    }
    es_primo = true; 
    j = 2;

    while (j <= i / 2) {
      if (i % j == 0) {  
        es_primo = false;
        break; 
      }
      j++;
    }

    if (es_primo == true) {
      printf("%d ", i); 
      cont_primos++;
    }
  }

  printf("\nCantidad de numeros primos: %d\n", cont_primos);

  return 0;
}
