#include <stdio.h>
#include <stdbool.h>
#define CONVERSION_KELVIN 273.15
#define CONVERSION_FAHRENHEIT 32.00

int main() {
  float celsius, kelvin, fahrenheit;
  bool mayor_32_fahrenheit;

  printf("Dame la temperatura en grados celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * (9.0/5.0)) + CONVERSION_FAHRENHEIT;
  kelvin = celsius + CONVERSION_KELVIN;
  mayor_32_fahrenheit = (fahrenheit > CONVERSION_FAHRENHEIT);

  printf("Temperatura en grados fahrenheit: %.2f\n", fahrenheit);
  printf("Temperatura en grados kelvin: %.2f\n", kelvin);
  printf("La temperatura en fahrenheit es mayor a 32: %d", mayor_32_fahrenheit);
}
