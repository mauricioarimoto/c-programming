/* TheHuxley - Problema Inverso
  @mauricio */

#include <stdio.h>

void imprimeOrdemInversa(int vet[], int tam) {
  int i; 
   for(i=tam-1; i>=0; i--) {
      printf("%d ", vet[i]);
   }
}

int main() {
   int n, i;
   scanf("%d", &n);
   int vet[n];

   for(i=0; i<n; i++) {
      scanf("%d", &vet[i]);
   }
   imprimeOrdemInversa(vet, n);
   return 0;
}
