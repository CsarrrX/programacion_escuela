#include <stdio.h>

int main() {
  int calificaciones[5];
  float promedio, suma; 
  for(int i = 0; i < 5; i++) {
    printf("Dame la calificacion del alumno %d: ", i + 1);
    scanf("%d", &calificaciones[i]);
    suma += calificaciones[i];
  }

  promedio = suma / 5; 

  printf("\nEl promedio es igual a %d\n", promedio);
  return 0;
}
