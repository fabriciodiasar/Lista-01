#include <stdio.h>

int main() {
  float salario;
  int diasdetrabalho;

  puts("\nQuantos dias o vendedor trabalhou?");
  if(scanf("%d", &diasdetrabalho)){};

  salario = diasdetrabalho * 50.25;
  
  if(diasdetrabalho > 10 && diasdetrabalho <= 20)
    salario = salario + salario * 0.2;
    else if (diasdetrabalho > 20) 
      salario = salario + salario * 0.3;
  
  salario = salario - salario * 0.1;

  printf("O sálario do vendedor é R$%.2f.", salario);

  return 0;    
}