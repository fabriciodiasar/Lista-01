#include <stdio.h>

int main() {
  int numero, n = 0;

  puts("\nInsira um número:");
  if(scanf("%d", &numero)){};

  puts("\nInsira o valor de n:");
  if(scanf("%d", &n)){};
  
  numero = numero * (1 << n);

  printf("\nO produto é %d.\n\n", numero);

  return 0;
}