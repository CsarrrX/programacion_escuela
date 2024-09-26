#include <stdio.h>

int main() {
  float lado1, lado2, lado3;

  float primer_lado, segundo_lado, tercer_lado;
  printf("Dame el valor del primer lado: \n");
  scanf("%f", &lado1);
  printf("Dame el valor del segundo lado: \n");
  scanf("%f", &lado2);
  printf("Dame el valor del tercer lado: \n");
  scanf("%f", &lado3);

    // Verificar si los lados forman un triángulo válido
  if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
      // Determinar el tipo de triángulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triángulo es equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("El triángulo es isósceles.\n");
    } else {
        printf("El triángulo es escaleno.\n");
    }
  } else {
    printf("Los lados ingresados no forman un triángulo válido.\n");
  }

    return 0;
}
