#include <stdio.h>

int main() {
  int suma_pares = 0, cont = 0, current_number = 0;
  do {
    cont++;
    current_number = cont * 2;
    suma_pares += current_number;
  }
  while(cont < 50); 
  
  printf("La suma es igual a: %d\n", suma_pares);
  return 0;
}
