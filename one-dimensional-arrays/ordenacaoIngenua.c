/* TheHuxley - Problema Ordenacao ingenua*/
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int i, j,aux;
  int vetor[n];

  for (i=0; i<n; i++) 
    scanf("%d", &vetor[i]);
  
  for(i=0; i<n; i++) {
    for (j=i+1; j<n; j++) {
      if(vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  for(i=0; i<n; i++)
    printf("[%d]", vetor[i]);
  return 0;
}