#include <stdio.h>

int main() {
  int user_num, cont = 5;
  
  printf("Dame un numero: \n");
  scanf("%d", &user_num);

  do {
    printf("%d termina en 5\n", cont);
    cont += 10;
  }
  while(cont <= user_num);
  return 0;
}
