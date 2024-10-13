#include <stdio.h>
#include <math.h>

int main() {
  double montoPrestamo, tasaAnual, cuotaMensual, tasaMensual, balanceRestante;
  int numAnios, numPagos, i, j;

  // Solicitar datos al usuario
  printf("Introduce el monto total del prestamo: ");
  scanf("%lf", &montoPrestamo);
  
  // Validar que el monto del préstamo sea positivo
  if (montoPrestamo <= 0) {
    printf("El monto del prestamo debe ser positivo.\n");
    return 0;
  }

  printf("Introduce la tasa de interes anual (por ejemplo, 5 para 5%%): ");
  scanf("%lf", &tasaAnual);
  
  // Validar que la tasa de interés sea mayor que cero
  if (tasaAnual <= 0) {
    printf("La tasa de interes debe ser mayor que cero.\n");
    return 0;
  }

  printf("Introduce el numero de anos para pagar el prestamo: ");
  scanf("%d", &numAnios);
  
  // Calcular tasa mensual y el número total de pagos
  tasaMensual = (tasaAnual / 100) / 12;
  numPagos = numAnios * 12;

  // Calcular la cuota mensual
  cuotaMensual = montoPrestamo * tasaMensual * pow(1 + tasaMensual, numPagos) / (pow(1 + tasaMensual, numPagos) - 1);
  printf("La cuota mensual es: %.2lf\n", cuotaMensual);

  // Inicializar el balance restante
  balanceRestante = montoPrestamo;

  // Ciclo externo para los años
  for (i = 1; i <= numAnios; i++) {
    // Ciclo interno para los meses dentro del año
    for (j = 1; j <= 12; j++) {
      // Calcular el interés mensual y lo que se paga al capital
      double interesMes = balanceRestante * tasaMensual;
      double pagoCapital = cuotaMensual - interesMes;
      
      // Actualizar el balance restante
      balanceRestante -= pagoCapital;
    }
    // Mostrar el balance restante al final del año
    printf("Balance restante al final del año %d: %.2lf\n", i, balanceRestante);
    
    // Si el balance es muy pequeño, detenerse
    if (balanceRestante <= 0) {
      balanceRestante = 0;
      break;
    }
  }

  return 0;
}
