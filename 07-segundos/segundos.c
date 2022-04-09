#include <stdio.h>

int main() {
  int segundos, qtd;

  printf("\nDigite o número de horas: ");
  if(scanf("%d", &qtd)){};

  segundos = qtd * 3600;

  printf("\nDigite o número de minutos: ");
  if(scanf("%d", &qtd)){};

  segundos = segundos + qtd * 60;

  printf("\nDigite o número de segundos: ");
  if(scanf("%d", &qtd)){};

  segundos = segundos + qtd;

  printf("\nA quantidade de segundos é de %d.\n\n", segundos);
  
  return 0;
}