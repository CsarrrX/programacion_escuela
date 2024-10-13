#include <stdio.h> 

int main() {
  int factorial, sum = 1;

  printf("Dame el numero del que quieres saber el factorial: \n");
  scanf("%d", &factorial);

  while(factorial > 0) {
    sum *= factorial;
    factorial -= 1;
  }

  printf("El factorial es igual a: %d", sum);
  return 0;
}
