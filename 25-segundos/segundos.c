#include <stdio.h>

int main() {
  int segundos, minutos, horas;

  puts("\nDigite a quantidade de segundos:");
  if(scanf("%d", &segundos)){};
  
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;

  printf("\n%d hora(s), %d minuto(s), %d segundo(s)\n\n", horas, minutos, segundos);
  
  return 0;
}