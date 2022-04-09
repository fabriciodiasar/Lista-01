#include <stdio.h>

int main() {
  int n1, n2;
  puts("\nInsira dois números para saber se o primeiro é múltiplo do segundo:");
  if(scanf("%d %d", &n1, &n2)){};

  int r = n1 % n2;

  switch (r) {
    case 0:
    printf("\n%d é múltiplo de %d.\n", n1, n2);
    break;

    default:
    printf("\n%d não é múltiplo de %d.\n", n1, n2);
    break;
  }
  
  return 0;
}