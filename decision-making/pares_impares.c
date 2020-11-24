/* 
    TheHuxley - Problema Pares, Ímpares, Positivos e Negativos
   @mauricio 
*/

#include <stdio.h>

int main() {
	long int numero;
	scanf("%ld", &numero);
	
	if(numero == 0) 
		printf("NULO\n");
	else if(numero % 2 == 0 && numero > 0) 
		printf("POSITIVO PAR\n");
	
	else if(numero % 2 != 0 && numero  > 0) 
	    printf("POSITIVO IMPAR\n");
	
	else if(numero % 2 == 0 && numero < 0) 
	    printf("NEGATIVO PAR\n");
	
	else if(numero % 2 != 0 && numero < 0) 
	   printf("NEGATIVO IMPAR\n");
	
	return 0;
}
