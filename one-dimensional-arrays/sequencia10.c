/* TheHuxley - Problema Sequencia de 10. 
  @mauricio*/

#include <stdio.h>
#define TAM 10

int totalOcorrenciaNumero(int vetor[], int tam) {
   int count = 0;
   for(int i=0; i<tam; i++) {
      if(vetor[i] == vetor[tam-1])
         count++;
  }
  return count;
}

int main() {
   int vetor[TAM];

   for (int i=0; i<TAM; i++) {
      scanf("%d", &vetor[i]);
   }
   printf("O numero %d apareceu %d vezes", vetor[TAM-1],totalOcorrenciaNumero(vetor, TAM));
   return 0;
}
