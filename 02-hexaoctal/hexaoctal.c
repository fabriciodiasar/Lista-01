#include <stdio.h>
#include <stdlib.h>

void troca(char *x, char *y) {
    char t = *x; *x = *y; *y = t;
}
 
char* inverter(char *buffer, int i, int j) {          
  while (i < j) {
    troca(&buffer[i++], &buffer[j--]); 
  }
    return buffer;
}
 
char* itoa(int valor, char* buffer, int base) {

  if (base < 2 || base > 32) {
    return buffer;
  } //
 
  int i = 0;
  
  while (valor) {
    int resto = valor % base;

    if (resto >= 10) {
      buffer[i++] = 65 + (resto - 10);
    } else {
      buffer[i++] = 48 + resto;
    } 
 
    valor = valor / base;
  }

  if (i == 0) {
     buffer[i++] = '0'; 
  }

  buffer[i] = '\0'; 
 
  return inverter(buffer, 0, i - 1); 

int main() {
  char buffer[33];
  int valor;
    
  printf("Insira um valor decimal para convertê-lo em hexadecimal e em octal: ");
  if(scanf("%d", &valor)){}; 
  printf("\n");
  
  int base[]  = { 16, 8 };
 
  for (int i = 0; i < 2; i++) {
    printf("O valor de %d na base %d é %s!\n", valor, base[i], itoa(valor, buffer, base[i]));
  }
 
  return 0;
}
