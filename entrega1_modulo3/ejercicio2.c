#include <stdio.h> 

int main() {
  int codigo_descuento;
  float precio, descuento, precio_final;
  // Declaracion de las constantes de descuentos. 
  const float DESCUENTO10 = 0.10, DESCUENTO20 = 0.20, DESCUENTO30 = 0.30;
  // Solicitamos al usuario el precio y codigo de descuento.
  printf("Introduce el precio del producto: \n");
  scanf("%f", &precio);
  printf("Introduce el codigo de descuento (1, 2, 3): \n");
  scanf("%d", &codigo_descuento);
  // Asignacion de descuento en base al codigo de descuento introducido.
  switch (codigo_descuento) {
    case 1: 
      descuento = DESCUENTO10;
      break;
    case 2: 
      descuento = DESCUENTO20;
      break;
    case 3: 
      descuento = DESCUENTO30;
      break;
    default:
      printf("No se aplico ningun descuento. \n");
      descuento = 0.00;
      break;
  }
  // Operaciones para determinar el precio con el descuento.
  precio_final = precio - (precio * descuento);
  // Impresion del precio final.
  printf("El precio final es: %.2f", precio_final);

  return 0;
}
