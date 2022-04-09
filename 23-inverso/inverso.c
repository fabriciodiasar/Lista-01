#include <stdio.h>

int main() {
  int numero, unidade, dezena, centena;

  puts("\nInsira um número de três dígitos para vê-lo invertido:");
  if(scanf("%d", &numero)){};

  centena = numero / 100;
  dezena = (numero % 100) / 10;
  unidade = (numero % 100) % 10;

  printf("\n%d%d%d\n", unidade, dezena, centena);
  puts("");
  
  return 0;
}