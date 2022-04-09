#include <stdio.h>

int main () {
  int x;

  puts("\nA multiplicação e a fração tem preferência, logo (3 * 6 / 2) serão calculados primeiro.");
  x = 7 + 3 * 6 / 2 -1;

  printf("x = %d.\n", x);

  puts("\nO resto de (2 % 2), a múltiplicação (2 * 2) e a divisão (2 / 2) serão calculados primeiro.");
  x =  2 % 2 + 2 * 2 - 2 / 2;

  printf("x = %d.\n", x);

  puts("\nO que está dentro do parenteses tem prioridade. Como são vários dentro de outros, o que estiver mais \"para dentro\" será calculado primeiro.");
  x = (3 * 9 * (3 + (9 * 3 / (3) ) ) );
  

  printf("x = %d.\n\n", x);

  return 0;
}