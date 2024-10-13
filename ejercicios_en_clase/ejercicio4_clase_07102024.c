#include <stdio.h>

int main() {
  long long user_num, cont = 0, division = 1;

  printf("Dame un numero entero positivo: \n");
  scanf("%d", &user_num);

  if(user_num > 0) {
    do {
      cont++;
      division *= 10;
    } while(user_num / division != 0);
    
    printf("El numero tiene %d digitos\n", cont);
  } else {
    printf("El numero proporcionado no es un entero positivo.\n");
  }

  return 0;
}



