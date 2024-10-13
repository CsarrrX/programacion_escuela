#include <stdio.h>

int main() { 
  int user_selec, user_quant, saldo_total = 1000;
  
  do {
    printf("[1] Consultar saldo\n");
    printf("[2] Depositar dinero\n");
    printf("[3] Retirar dinero\n");
    printf("[4] Salir\n");
    printf("Selecciona tu opcion: ");
    scanf("%d", &user_selec);  // Lee la selección del usuario.

    // Controla la acción a realizar según la selección del usuario
    switch (user_selec) {
      case 1: 
        // Opción para consultar el saldo
        printf("Tu saldo es de: %d\n", saldo_total);
        break;  // Sale del switch.

      case 2:
        // Opción para depositar dinero
        printf("Cantidad a depositar: ");
        scanf("%d", &user_quant);  // Lee la cantidad a depositar.
        saldo_total += user_quant;  // Aumenta el saldo total con el monto depositado.
        printf("El nuevo saldo es: %d\n", saldo_total);
        break;  // Sale del switch.

      case 3:
        // Opción para retirar dinero
        printf("Cantidad a retirar: ");
        scanf("%d", &user_quant);  // Lee la cantidad a retirar.
        // Verifica si hay suficiente saldo para realizar el retiro.
        if(user_quant > saldo_total) {
          printf("La cantidad seleccionada es mayor al saldo actual.\n");
        }
        else {
          saldo_total -= user_quant;  // Reduce el saldo total con el monto retirado.
          printf("El nuevo saldo es: %d\n", saldo_total);
        }
        break;  // Sale del switch.

      case 4:
        // Opción para salir del programa
        printf("Saliendo...\n");
        break;  // Sale del switch.

      default:
        // Si el usuario ingresa una opción no válida
        printf("NO ES UNA OPCION VALIDA.\n");
    }
  } 
  while(user_selec != 4);  // Repite el ciclo hasta que el usuario seleccione la opción 4.

  return 0; 
}
