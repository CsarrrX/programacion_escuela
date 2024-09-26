#include <stdio.h>

int main() {
  int contador = 0, numero_estudiantes;
  float suma_de_calificaciones = 0, promedio = 0, calificacion_actual;

  printf("Dame el numero de calificaciones: ");
  scanf("%d", &numero_estudiantes);

  while(contador < numero_estudiantes) {
    printf("\nDame la calificacion numero %d: ", contador + 1);
    scanf("%f", &calificacion_actual);
    suma_de_calificaciones += calificacion_actual;
    contador++;
  }
  promedio = suma_de_calificaciones / numero_estudiantes;
  printf("\nEl promedio es igual a: %.2f", promedio);

  return 0;
}
