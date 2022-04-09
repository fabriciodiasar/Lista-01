#include <stdio.h>

int main() {
  int letras[13] = {'A', 'B', 'C', 'a', 'b', 'c', '0' , 12 , '$', '*', '+', '/', ' ' };

  puts("");
  
  for (int i = 0; i < 13; i++) 
    printf("%d ", letras[i]);
  
  puts("\n");
  
  return 0;
}