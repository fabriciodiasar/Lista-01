#include <stdio.h>

int main () {
  int numero1, numero2;
  int resultado;

  printf("\nInsira dois números: \n");
  if(scanf("%d %d", &numero1, &numero2)){};

  resultado = numero1 + numero2;
  printf("\nA soma é %d.", resultado);

  resultado = numero1 * numero2;
  printf("\nO produto é %d.", resultado);

  resultado = numero1 - numero2;
  printf("\nA diferença é %d.", resultado);

  resultado = numero1 / numero2;
  printf("\nO quociente é %d.", resultado);

  resultado = numero1 % numero2;
  printf("\nO resto é %d.\n\n", resultado);
  
  return 0;
}