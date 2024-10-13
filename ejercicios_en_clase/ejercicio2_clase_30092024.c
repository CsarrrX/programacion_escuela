#include <stdio.h>

int main() {
  int passwd = 1234, num_intentos = 0, current_passwd = 0, num_maximo = 3;
  do {
    num_intentos++;
    printf("Intento numero: %d de 3 | Introduzca su password: \n", num_intentos);
    scanf("%d", &current_passwd);
    if(current_passwd == passwd) {
      printf("El password fue correcto! \n");
      break;
    }
    else {
      printf("El password fue INCORRECTO!\n");
    }
  } while(num_maximo > num_intentos);
  if (num_intentos == num_maximo) {
    printf("Has superado el maximo numero de intentos. \n");
  }
  return 0;
}
