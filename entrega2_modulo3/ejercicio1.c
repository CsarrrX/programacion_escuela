#include <stdio.h>
#include <stdbool.h>

int main() {
  int inicio_rango, fin_rango, j, cont_primos = 0;
  bool es_primo;

  // Solicita al usuario el número inicial del rango
  printf("Dame el numero inicial del rango: \n");
  scanf("%d", &inicio_rango);
  
  // Solicita al usuario el número final del rango
  printf("Dame el numero final del rango: \n");
  scanf("%d", &fin_rango);

  // Imprime los números primos dentro del rango
  printf("Los numeros primos en el rango son: \n");
  
  // Recorre cada número dentro del rango especificado por el usuario
  for (int i = inicio_rango; i <= fin_rango; i++) {
    if (i < 2) {
      continue;  
      // Salta los números menores a 2 ya que no son primos.
    }

    es_primo = true; 
    // Asume que el número actual es primo.

    j = 2; 
    // Inicializa el divisor.

    // Bucle para verificar si el número tiene divisores.
    while (j <= i / 2) {
      if (i % j == 0) {  
        es_primo = false; 
        // Si encontramos un divisor (diferente de 1 y del número), el número no es primo.
        break; 
        // Sale del bucle porque ya no es necesario seguir buscando divisores.
      }
      j++;
      // Incrementa el divisor para la siguiente iteración.
    }

    if (es_primo == true) {
      printf("%d ", i); 
      // Si el número es primo, lo imprime.
      cont_primos++;
      // Incrementa el contador de números primos.
    }
  }

  // Imprime la cantidad total de números primos encontrados en el rango
  printf("\nCantidad de numeros primos: %d\n", cont_primos);

  return 0;
}
