#include <stdio.h>

int main() {
  int contador = 0;
  float suma_de_calificaciones = 0, promedio = 0, calificacion_actual = 0;

  while(calificacion_actual <= 10 && calificacion_actual >= 0) {
    printf("\nDame la calificacion numero %d: ", contador + 1);
    scanf("%f", &calificacion_actual);
    if(calificacion_actual <= 10 && calificacion_actual >= 0) {
      suma_de_calificaciones += calificacion_actual;
    }
    contador++;
  }

  promedio = suma_de_calificaciones / (contador - 1);
  printf("\nEl promedio es igual a: %.2f", promedio);

  return 0;
}
