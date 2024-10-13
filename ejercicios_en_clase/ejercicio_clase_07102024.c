#include <stdio.h>

int main() {
  int num1, num2, sum = 0; 
  
  do {
    printf("Numero uno: \n");
    scanf("%d", &num1);
    printf("Numero dos: \n");
    scanf("%d", &num2);
    if (num2 < num1) {
      printf("El numero 1 es menor al numero 2, por favor reintroduce. \n");
    }
  }
  while(num2 < num1);

  for(int i = num1; i <= num2; i++) {
    if(i % 2 == 0) {
      sum += i;
    }
  }
  
  printf("La suma de los numeros pares entre %d y %d es igual a %d\n", num1, num2, sum);

  return 0;
}
