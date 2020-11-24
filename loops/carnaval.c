/* 
   TheHuxley - Problema Carnaval 
*/
#include <stdio.h>

int main() {
    float maiorNota, menorNota, nota, somaNotas;
    int count = 0;

    menorNota = 10.0;
    maiorNota = 5.0;
    
    while(count < 5) { //le as 5 notas que variam de 5,0 a 10,0.
        scanf("%f",&nota);
        somaNotas += nota;
        count++;
        
        //maior nota
        if (nota > maiorNota)
            maiorNota = nota;
        //menor nota
        if (nota < menorNota)
            menorNota = nota;   
    }
    
    //nota final excluindo a maior e a menor nota
    somaNotas = somaNotas - maiorNota - menorNota;
    printf("%0.1f",somaNotas);
	return 0;
}