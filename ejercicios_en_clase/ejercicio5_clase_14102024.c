#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  const float MIN = 40, MAX = 60, GRADO_MAXIMO = 55;
  bool estable = true;
  float promedio = 0, suma = 0, temp_max, temp_min, current_temp = 0, diferencia = 0, num_alea; 
  float temp[8];
  srand(time(NULL));
  int cont = 0, temp_crit = 0;

  while(cont < 8) {
    num_alea = MIN + (float)rand() / RAND_MAX * (MAX - MIN);
    temp[cont] = num_alea;
    printf("\nTemperatura %d = %.2f\n", cont, temp[cont]);
    cont++;
  }
  temp_max = temp[0];
  temp_min = temp[0];
  for(int i = 0; i < 8; i++) {
    if(temp_max < temp[i]) {
      temp_max = temp[i];
    }
    if(temp_min > temp[i]) {
      temp_min = temp[i];
    }
    suma += temp[i];
    if (temp[i] > GRADO_MAXIMO) {
      temp_crit += 1; 
    }
  }

  promedio = suma / 8;
  
  for(int i = 0; i < 8; i++) {
    diferencia = current_temp - temp[i];
    if(diferencia >= 5) {
      estable = false;
    }
    current_temp = temp[i];
  }

  printf("\nLa temperatura maxima es: %f\n", temp_max);
  printf("\nLa temperatura minima es: %f\n", temp_min);
  printf("\nLa temperatura promedio es: %f\n", promedio);
  printf("\nLa temperatura ha exedido el umbral %d veces.\n", temp_crit);
  if(!estable) {
    printf("\nLa temperatura NO ha sido estable.");
  }
  else {
    printf("\nLa temperatura SI ha sido estable.");
  }


  return 0;
}
