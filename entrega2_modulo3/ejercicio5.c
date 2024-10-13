#include <stdio.h>
#include <math.h>

int main() {
    double monto_total_prestamo, tasa_interes_anual, num_years, pago_mensual;
    double tasa_interes_mensual, num_total_pagos, balance_restante;

    printf("Introduce el monto total del prestamo: ");
    scanf("%lf", &monto_total_prestamo);
    if (monto_total_prestamo <= 0) {
        printf("El monto del prestamo debe ser un valor positivo.\n");
        return 1;
    }

    printf("Introduce la tasa de interes anual (en porcentaje): ");
    scanf("%lf", &tasa_interes_anual);
    if (tasa_interes_anual <= 0) {
        printf("La tasa de interes anual debe ser mayor que cero.\n");
        return 1;
    }

    printf("Introduce el numero de años para pagar el prestamo: ");
    scanf("%lf", &num_years);

    tasa_interes_mensual = (tasa_interes_anual / 100) / 12;
    num_total_pagos = num_years * 12;

    pago_mensual = (monto_total_prestamo * tasa_interes_mensual * pow(1 + tasa_interes_mensual, num_total_pagos)) / 
                   (pow(1 + tasa_interes_mensual, num_total_pagos) - 1);
    printf("Pago mensual: %.2lf\n", pago_mensual);

    balance_restante = monto_total_prestamo;

    for (int i = 0; i < num_years; i++) {
        for (int j = 0; j < 12; j++) {
            double interes_mensual = balance_restante * tasa_interes_mensual;
            balance_restante -= (pago_mensual - interes_mensual);
        }
        printf("Año [%d], balance restante: %.2lf\n", i + 1, balance_restante);
    }

    return 0;
}
