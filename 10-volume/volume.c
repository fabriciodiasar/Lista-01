#include <stdio.h>

int main() {
  float volume;
  int altura, largura, comprimento;

  printf("\nDescubra o volume de uma caixa retangular.");
  
  printf("\nDigite o seu comprimento: ");
  if(scanf("%d", &comprimento)){};

  printf("\nLargura: ");
  if(scanf("%d", &largura)){};

  printf("\nAltura: ");
  if(scanf("%d", &altura)){};

  volume = ( (float) comprimento ) * largura * altura;

  printf("\nO volume da caixa é de %.2f\n\n", volume);
  
  return 0;
}