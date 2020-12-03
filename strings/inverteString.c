// TheHuxley - Problema #247 Inverter uma string */

#include <stdio.h>
#include <string.h>

int main() {
  char string[255];
  int i, tam;

  gets(string);
  tam = strlen(string);

  for (i = tam-1; i >= 0; i--)
    printf("%c",string[i]);
return 0;
}
