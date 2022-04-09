#include <stdio.h>

int main() {
  float celsius, fahrenheit;

  puts("\nDigite um valor em Celsius para ser convertido em Fahrenheit: ");
  if(scanf("%f", &celsius)){};

  fahrenheit = (9 * celsius + 160) / 5;

  printf("A temperatura é de %.2f fahrenheit.\n\n", fahrenheit);

  return 0;
}