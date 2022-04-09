#include <stdio.h>

int main() {
  float horaaula, inss, salariobruto, salarioliquido;
  int aulas;

  puts("\nInsira o valor da hora aula:");
  if(scanf("%f", &horaaula)){};

  puts("\nInsira o número de horas trabalhas no mês: ");
  if(scanf("%d", &aulas)){};

  salariobruto = horaaula * aulas;

  // Cálculo do valor do INSS de acordo com a Reforma da Previdência de 2019.
  if (salariobruto <= 1212) 
    inss = salariobruto * 0.075;
  
  else if (salariobruto > 1212 && salariobruto < 2427.35)
    inss = 1212 * 0.075 + (salariobruto - 1212) * 0.09;
  
  else if (salariobruto > 2427.35 && salariobruto < 3641.03)
    inss = 1212 * 0.075 + (2427.35 - 1212) * 0.09 + (salariobruto - 2427.35) * 0.12;
  
  else if (salariobruto > 3641.03 && salariobruto < 7087.22)
    inss = 1212 * 0.075 + (2427.35 - 1212) * 0.09 + (3641.03 - 2427.35) * 0.12 + (salariobruto - 3641) * 0.14;
  
  else 
    inss = 1212 * 0.075 + (2427.35 - 1212) * 0.09 + (3641.03 - 2427.35) * 0.12 + (7087.22 - 3641) * 0.14;

  salarioliquido = salariobruto - inss;

  printf("\nO salário bruto é de R$%.2f. O salário líquido é de R$%.2f.\n\n", salariobruto, salarioliquido);
  
  return 0;
}