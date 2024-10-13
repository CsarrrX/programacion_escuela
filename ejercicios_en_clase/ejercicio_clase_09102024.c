#include <stdio.h>

int main() {
  int lista[10], cont = 0;
  while(cont < sizeof(lista)/sizeof(lista[0])) {
    printf("Dame el elemento %d del arreglo: ", cont); 
    scanf("%d", &lista[cont]);
    cont++;
  }

  int maximo = lista[0];

  for(int i = 0; i < sizeof(lista)/sizeof(lista[0]); i++) {
    if(lista[i] > maximo) {
      maximo = lista[i];
    }
  } 

  printf("El numero maximo es: %d", maximo);
  return 0;
}
