#include <stdio.h>

int main () {
  float valor;

  puts("Insira um valor: ");
  if(scanf("%f", &valor)){}; // Pequeno if para o compilador não ignorar o scanf.

  printf("\n%.1f", valor);

  return 0;
}