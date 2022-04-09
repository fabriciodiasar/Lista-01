#include <stdio.h>

int main() {
  int valor;

  printf("\nDigite algum valor para saber o seu antecessor e o seu sucessor: ");
  if(scanf("%d", &valor)){};

  valor = valor - 1;
  printf("\nO seu antecessor é %d, ", valor);

  valor = valor + 2;
  printf("e o seu sucessor é %d.\n\n", valor);

  return 0;
}