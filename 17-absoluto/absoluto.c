#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;

  puts("\nDigite um número para saber o seu valor absoluto: ");
  if(scanf("%d", &a)){};

  a = abs(a);

  printf("\nO valor absoluto do seu número é %d.\n\n", a);
  
  return 0;
}