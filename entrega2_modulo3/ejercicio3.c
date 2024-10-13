#include <stdio.h>

int main() { 
  int cuenta_presentes = 0, cuenta_ausentes = 0;  
  int num_estudiantes, presente;  
  
  // Solicita al usuario el número de estudiantes
  printf("Ingrese numero de estudiantes: ");
  scanf("%d", &num_estudiantes);  

  // Bucle para iterar a través de cada estudiante
  for(int i = 1; i <= num_estudiantes; i++) {
    // Pregunta al usuario si el estudiante está presente (1) o ausente (0)
    printf("ESTUDIANTE [%d] Ausente<0> Presente<1>: ", i);
    scanf("%d", &presente);  

    // Verifica si el estudiante está presente
    if(presente == 1) {
      cuenta_presentes++;  // Incrementa el contador de presentes
    }
    // Verifica si el estudiante está ausente
    else if(presente == 0) {
      cuenta_ausentes++;  // Incrementa el contador de ausentes
    }
    // Maneja la opción inválida ingresada por el usuario
    else {
      printf("Opcion no valida. \n");  // Informa que la opción no es válida
    }
  }

  // Muestra los totales de estudiantes presentes y ausentes
  printf("Total de presentes: %d\n", cuenta_presentes);
  printf("Total de ausentes: %d\n", cuenta_ausentes);
  
  return 0;  
}
