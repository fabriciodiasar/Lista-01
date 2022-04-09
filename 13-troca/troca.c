#include <stdio.h>

int main() {
  int num1, num2, troca;
  
  printf("\nDigite dois números: ");
  if(scanf("%d", &num1)){};
  if(scanf("%d", &num2)){};

  troca = num1;
  num1 = num2;
  num2 = troca;

  printf("%d %d", num1, num2);

  return 0;
}