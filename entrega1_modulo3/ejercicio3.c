#include <stdio.h>

int main() {
  // Definimos las constantes de edad mínima y máxima aceptables.
  const int EDAD_MINIMA = 0, EDAD_MAXIMA = 130;
  int edad_usuario;
  
  // Solicitamos al usuario que introduzca su edad.
  printf("Introduce la edad: \n");
  scanf("%d", &edad_usuario);

  // Verificamos si la edad está fuera de los límites válidos.
  if(edad_usuario >= EDAD_MAXIMA || edad_usuario <= EDAD_MINIMA) {
    printf("Edad no valida. \n");
  }
  // Clasificamos al usuario como "Niño" si tiene entre 1 y 12 años.
  else if(edad_usuario <= 12 && edad_usuario > EDAD_MINIMA) {
    printf("Niño. \n");
  }
  // Clasificamos al usuario como "Adolescente" si tiene entre 13 y 17 años.
  else if(edad_usuario <= 17 && edad_usuario >= 13) {
    printf("Adolescente. \n");
  }
  // Clasificamos al usuario como "Adulto" si tiene entre 18 y 64 años.
  else if(edad_usuario <= 64 && edad_usuario >= 18) {
    printf("Adulto. \n");
  }
  // Clasificamos al usuario como "Adulto mayor" si tiene 65 años o más.
  else if(edad_usuario < EDAD_MAXIMA && edad_usuario >= 65) {
    printf("Adulto mayor. \n");
  }

  return 0;
}
