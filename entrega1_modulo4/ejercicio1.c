#include <stdio.h>

int main() {
  int mat[5][4];
  int sum_primas = 0, sum_riesgos = 0;
  int search_section, risk_umbral;
  printf("Ingrese los datos de las polizas (ID, region, prima, riesgo): \n");

  for(int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  for(int i = 0; i < 5; i++) {
    sum_primas += mat[i][2];
    sum_riesgos += mat[i][3];
  }

  printf("Ingrese la region a buscar: \n");
  scanf("%d", &search_section);
  printf("Ingrese el umbral de riesgo: \n");
  scanf("%d", &risk_umbral);

  printf("Total de primas: %d\n", sum_primas);
  printf("Total de riesgos: %d\n", sum_riesgos);

  for(int i = 0; i < 5; i++) {
      if(mat[i][1] == search_section && mat[i][3] > risk_umbral) {
        printf("Póliza con riesgo superior a %d encontrada en la región %d: ID %d\n", risk_umbral, search_section, mat[i][0]);
    }
  }


  return 0;
}
