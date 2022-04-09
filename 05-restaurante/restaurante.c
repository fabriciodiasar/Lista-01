#include <stdio.h>

int main() {
  float conta;

  printf("\nDigite o valor da conta do cliente: ");
  if(scanf("%f", &conta)){};

  printf("\n%.2f\n\n", conta + conta * 0.1);

  return 0;
}