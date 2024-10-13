#include <stdio.h>
#include <stdbool.h>

int main() {
  int num;
  bool es_primo = true;
  printf("Dame un numero: \n");
  scanf("%d", &num);
  
  if(num > 1) {
    for(int i = 2; i < num / 2; i++) {
      if(num % i == 0) {
        es_primo = false;
        break;
      }
    }
    if(es_primo == true) {
      printf("El numero es primo. \n");
    }
    else {
      printf("El numero no es primo. \n");
    }
  }
  else {
    printf("El numero no es primo.");
  }
}
