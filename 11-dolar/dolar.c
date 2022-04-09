#include <stdio.h>
#include <stdlib.h>

int main () {
  float dolar = 1, numero;

  printf("\nInsira a cotação do dólar: ");
  if(scanf("%f", &numero)){};

  dolar *= numero;

  printf("\nInsira a quantidade de reais que você quer converter para dólar: ");
  if(scanf("%f", &numero)){};

  dolar *= numero;
  
  printf("\n%.2f", dolar);

  return 0;
}