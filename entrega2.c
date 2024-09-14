#include <stdio.h>
#include <stdbool.h>
#define TASA_DE_COMPARACION 5000.00

int main() {
  float cantidad_invertir, tiempo_en_inversion, tasa_de_interes, monto_total;
  bool mayor_tasa_de_comparacion;

  printf("Introduce la cantidad a invertir: ");
  scanf("%f", &cantidad_invertir);
  printf("Introduce el tiempo en inversion (en años): ");
  scanf("%f", &tiempo_en_inversion);
  printf("Introduce la tasa de interes anual (en porcentaje): ");
  scanf("%f", &tasa_de_interes);

  tasa_de_interes = tasa_de_interes / 100.00;
  monto_total = cantidad_invertir + (cantidad_invertir * tasa_de_interes * tiempo_en_inversion);
  mayor_tasa_de_comparacion = (monto_total > TASA_DE_COMPARACION);

  printf("Inversion inicial: %.2f\n", cantidad_invertir);
  printf("Monto total despues de %.0f años: %.2f\n", tiempo_en_inversion, monto_total);
  printf("Es el monto total mayor %.2f?: %d", TASA_DE_COMPARACION, mayor_tasa_de_comparacion);

  return 0;
}
