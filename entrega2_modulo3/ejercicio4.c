#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int numero_secreto = rand() % 100 + 1;
  int intento, contador_intentos = 0;
  const int maximos_intentos = 5;

  do {
    printf("Adivina el numero! (entre 1 y 100): \n");
    scanf("%d", &intento);
    contador_intentos++;

    if(intento > numero_secreto) {
      printf("Tu numero es MAYOR al numero_secreto.\n");
    }
    else if(intento < numero_secreto) {
      printf("Tu numero es MENOR al numero secreto.\n");
    }
    else {
      printf("FELICIDADES, adivinaste el numero secreto!!! \n");
      break;
    }
  }
  while(contador_intentos < maximos_intentos);
  if(intento != numero_secreto) {
    printf("Alcanzaste el maximo numero de intentos, el numero secreto era: %d\n", numero_secreto);
  }
  return 0;
}
