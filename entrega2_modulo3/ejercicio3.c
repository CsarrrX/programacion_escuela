#include <stdio.h>

int main() { 
  int cuenta_presentes = 0, cuenta_ausentes = 0, num_estudiantes, presente; 
  
  printf("Ingrese numero de estudiantes: ");
  scanf("%d", &num_estudiantes);
  for(int i = 1; i <= num_estudiantes; i++) {
    printf("ESTUDIANTE [%d] Ausente<0> Presente<1>: ", i);
    scanf("%d", &presente);
    if(presente == 1) {
      cuenta_presentes++;
    }
    else if(presente == 0){
      cuenta_ausentes++;
    }
    else {
      printf("Opcion no valida. \n");
    }
  }
  printf("Total de presentes: %d\n", cuenta_presentes);
  printf("Total de ausentes: %d\n", cuenta_ausentes);
  return 0;
}
