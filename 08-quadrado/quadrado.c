#include <stdio.h>

int main () {
  int valor;
  
  printf("\nDigite um valor: ");
  if(scanf("%d", &valor)){};

  valor *= valor;
  printf("\nO quadrado desse valor é %d.\n\n", valor);
  
  return 0;
}