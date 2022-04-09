#include <stdio.h>
#include <math.h>

int main() {
  double d, x1, x2, y1, y2;

  puts("\nInsira as coordenadas do primeiro ponto (x,y):");
  if(scanf("%lf %lf", &x1, &y1)){};

  puts("\nInsira as coordenadas do segundo ponto (x,y):");
  if(scanf("%lf %lf", &x2, &y2)){};

  d = (pow((x2 - x1), 2) + pow((y2 - y1), 2));

  d = sqrt(d);

  printf("\nA distância entre os dois pontos é %lf.\n\n", d);
  
  return 0;
}