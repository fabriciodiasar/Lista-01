#include <stdio.h>

int main() {
  int num;

  puts("Digite um número:");
  if(scanf("%d", &num)){};

  num = num % 2;

  switch (num) {
    case 0:
    printf("O número é par.\n\n");
    break;

    default:
    printf("O número é ímpar.\n\n");
    break;
  }
  
  return 0;
}