#include <stdio.h>

int main() { 
  int user_selec, user_quant, saldo_total = 1000;
  do {
    printf("[1] Consultar saldo\n");
    printf("[2] Depositar dinero\n");
    printf("[3] Retirar dinero\n");
    printf("[4] Salir\n");
    printf("Selecciona tu opcion: ");
    scanf("%d", &user_selec);

    switch (user_selec) {
      case 1: 
      printf("Tu saldo es de: %d\n", saldo_total);
      break;
      case 2:
        printf("Cantidad a depositar: ");
        scanf("%d", &user_quant);
        saldo_total += user_quant;
        printf("El nuevo saldo es: %d\n", saldo_total);
        break;
      case 3:
        printf("Cantidad a retirar: ");
        scanf("%d", &user_quant);
        if(user_quant > saldo_total) {
          printf("La cantidad seleccionada es mayor al saldo actual.\n");
        }
        else {
          saldo_total -= user_quant;
          printf("El nuevo saldo es: %d\n", saldo_total);
        }
        break;
      case 4:
        printf("Saliendo...\n");
        break;
      default:
        printf("NO ES UNA OPCION VALIDA.\n");
    }
  }
  while(user_selec != 4);
  return 0;
}
