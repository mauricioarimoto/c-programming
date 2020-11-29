/* TheHuxley - Problema Quais os numeros que estao faltando? */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor1[20],vetor2[20], vetorAux[20];
    int i,j,tam, aux, count, count2;
    count = count2 = 0;
    char c;
    
    i=0;
    while (c != '\n') {
        scanf("%d%c",&vetor1[i], &c);
        i++;
    }
    tam = i;
    
    i=0;
    while (i < 10) {
        scanf("%d",&vetor2[i]);
        i++;
        count2++;
    }
    
    for(j=0; j<tam; j++) {
        for(i=0; i<10; i++){
            if(vetor1[j] != vetor2[i]){
                if(i == count2-1){
                    vetorAux[count] = vetor1[j];
                    count++;
                }
            }
            else 
                break;
        }
    }
    for(j=0; j<count; j++) {
        for(i=0; i<count; i++) {
            if(vetorAux[j] >= vetorAux[i]){
                aux = vetorAux[i];
                vetorAux[i] = vetorAux[j];
                vetorAux[j] = aux;
            }
        }
    }
    
    //imprime vetor resultante
    for(i=0; i<count; i++)
        printf("%d ",vetorAux[i]);
        
    return 0;
}
