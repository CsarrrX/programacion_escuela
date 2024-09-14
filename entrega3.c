#include <stdio.h>
#include <stdbool.h>

int main() {
  int edad1, edad2;
  bool ambas_edades_rango, una_edad_rango;

  printf("Introduce la primera edad: ");
  scanf("%d", &edad1);
  printf("Introduce la segunda edad: ");
  scanf("%d", &edad2);
  
  ambas_edades_rango = ((edad1 >= 18 && edad1 <= 30) && (edad2 >= 18 && edad2 <= 30));
  una_edad_rango = ((edad1 >= 18 && edad1 <= 30) || (edad2 >= 18 && edad2 <= 30));

  printf("Ambas edades estan dentro del rango (18-30): %d\n", ambas_edades_rango);
  printf("Al menos una de las edades esta dentro del rango (18-30): %d", una_edad_rango);

  return 0;
}
