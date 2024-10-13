#include <stdio.h>

int main() {
  int num_user, sum_numbers = 0;
  printf("Introduce un numero: ");
  scanf("%d", &num_user);

  for(int i = 0; i < num_user; i++) {
    if(i % 2 != 0) {
      sum_numbers += i;
    }
  }
  printf("La suma de los numeros de 1 hasta %d es: %d", num_user, sum_numbers);
  return 0;
}
