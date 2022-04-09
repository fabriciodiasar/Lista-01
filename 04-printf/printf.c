#include <stdio.h>

int main() {
  int X;

  printf("\nDigite um número: ");
  if(scanf("%d", &X)){};

  printf("\n%d %d %d\n\n", 3*X, X*X, X/2);

  return 0;
}