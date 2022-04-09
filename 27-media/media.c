#include <stdio.h>
#include <math.h>

int main() {
  float numero[3];
  float media_a = 0, media_g = 1;

  for (int i = 0; i < 3; i++) {
    printf("\nDigite o %d° número: ", i+1);
    if(scanf("%f", &numero[i])){};
  }

  for (int i = 0; i < 3; i++) {
    media_a = media_a + numero[i];
    media_g = media_g * numero[i];
  }

  media_a = media_a / 3;
  media_g = pow(media_g, 1.0 / 3.0);

  printf("\nA média aritmética é %.2f, e a média geométrica é %.2f.\n\n", media_a, media_g);
  
  return 0;
}