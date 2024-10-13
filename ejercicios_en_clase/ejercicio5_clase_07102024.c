#include <stdio.h>

int main() {
    int numero, original, invertido = 0, resto;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, ingresa un número positivo.\n");
        return 1;
    }

    original = numero;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }

    if (original == invertido) {
        printf("El número %d es un palíndromo.\n", original);
    } else {
        printf("El número %d no es un palíndromo.\n", original);
    }

    return 0;
}
