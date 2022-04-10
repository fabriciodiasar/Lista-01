#include <stdio.h>

int main () {
  float valor;

  puts("Insira um valor: ");
  if(scanf("%f", &valor)){};

  printf("\n%.1f", valor);

  return 0;
}
