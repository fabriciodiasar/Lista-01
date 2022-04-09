#include <stdio.h>

#define PI 3.14159

int main() {
  float raio;

  puts("\nInsira o valor do raio do círculo:");
  if(scanf("%f", &raio)){};

  printf("O diâmetro é %.2f. A circunferência é %.2f. A área é %.2f.\n\n", 2 * raio, 2 * raio * PI, raio * raio * PI);
  
  return 0;
}