#include <stdio.h>

int main () {
  char sexo;
  float pesoideal, altura;

  puts("\nQual o seu sexo?");
  puts("(M) Masculino (F) Feminino");
  if(scanf(" %c", &sexo)){};

  puts("\nQual a sua altura? ");
  if(scanf("%f", &altura)){};

  switch (sexo) {
    case 'M':
    pesoideal = 72.7 * altura - 58;
    break;

    case 'F':
    pesoideal = 62.1 * altura- 44.7;
    break;
  }

  printf("\nSeu peso ideal é %.2f Kg.", pesoideal);

  return 0;
}