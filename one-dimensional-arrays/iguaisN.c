/* TheHuxley - Problema Iguais a n
 @mauricio */
#include <stdio.h>

void verificaOcorrenciaNumeros(int vet[], int tam) {
    int i;
    for(i=0; i<=tam-2; i++) {
        if(vet[tam-1] == vet[i])
            printf("%d\n", i);
    }
}

int main() {
    int vetor[101];
    int i;

    for(i=0; i<101; i++) 
        scanf("%d", &vetor[i]);
    verificaOcorrenciaNumeros(vetor, 101);
    
    return 0;
}
