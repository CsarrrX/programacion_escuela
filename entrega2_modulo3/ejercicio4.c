#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));  // Inicializa la semilla para la generación de números aleatorios
  int numero_secreto = rand() % 100 + 1;  // Genera un número secreto entre 1 y 100
  int intento, contador_intentos = 0;  // Variables para el intento del usuario y el contador de intentos
  const int maximos_intentos = 5;  // Establece el número máximo de intentos permitidos

  // Bucle para permitir al usuario adivinar el número secreto
  do {
    printf("Adivina el numero! (entre 1 y 100): \n");
    scanf("%d", &intento);  // Lee el intento del usuario
    contador_intentos++;  // Incrementa el contador de intentos

    // Compara el intento del usuario con el número secreto
    if(intento > numero_secreto) {
      printf("Tu numero es MAYOR al numero_secreto.\n");  // Indica que el intento es mayor
    }
    else if(intento < numero_secreto) {
      printf("Tu numero es MENOR al numero secreto.\n");  // Indica que el intento es menor
    }
    else {
      printf("FELICIDADES, adivinaste el numero secreto!!! \n");  // Felicita al usuario si adivina correctamente
      break;  // Sale del bucle si se adivina el número
    }
  }
  while(contador_intentos < maximos_intentos);  // Repite mientras no se alcance el máximo de intentos

  // Si no se adivina el número después de los intentos permitidos
  if(intento != numero_secreto) {
    printf("Alcanzaste el maximo numero de intentos, el numero secreto era: %d\n", numero_secreto);
  }
  
  return 0;
}
