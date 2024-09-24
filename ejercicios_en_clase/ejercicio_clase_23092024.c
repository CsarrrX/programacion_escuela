#include <stdio.h>

int main() {
  float ingresos_anuales, tasa_de_impuestos; 
  int estado_civil;
  
  printf("Dame tus ingresos anuales: ");
  scanf("%f", &ingresos_anuales);
  printf("Dame tu estado civil (Casado[1] Soltero[2]): ");
  scanf("%d", &estado_civil);

  // Revisar el estado civil: 
  if(estado_civil == 1) {
    if(ingresos_anuales <= 30000) {
      tasa_de_impuestos = 10;
    }
    if(30000 < ingresos_anuales && ingresos_anuales <= 60000) {
      tasa_de_impuestos = 20;
    }
    if(60000 < ingresos_anuales) {
      tasa_de_impuestos = 30;
    }
    printf("\nDebes pagar %.0f en impuestos.", ingresos_anuales * (tasa_de_impuestos / 100));
  }
  else if (estado_civil == 2) {
    if(ingresos_anuales <= 50000) {
      tasa_de_impuestos = 5;
    }
    if(50000 < ingresos_anuales && ingresos_anuales <= 100000) {
      tasa_de_impuestos = 15;
    }
    if(100000 < ingresos_anuales) {
      tasa_de_impuestos = 25;
    }
    printf("\nDebes pagar %.0f$ en impuestos.", ingresos_anuales * (tasa_de_impuestos / 100));
  }
  else {
    printf("\nEl estado civil proporcionado no es correcto.");
  }

  return 0;
}
