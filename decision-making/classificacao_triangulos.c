/* 
    TheHuxley - Problema classificacao de triangulos 
   @mauricio 
*/
#include <stdio.h>

int main() {
	float n1, n2, n3;
	
	/* le 3 numeros reais maiores que 0 correspondendo 
	   ao comprimento dos lados do triangulo */
	scanf("%f%f%f",&n1, &n2 ,&n3); 
	
	if (n1 == n2 && n2 == n3) //se todos os lados sao iguais
		printf("equilatero\n");
	
	else if (n1 == n2 || n1 == n3 || n2 == n3) //se ao menos dois lados sao iguais
		printf("isosceles\n");
	
	else //se todos os lados sao diferentes
		printf("escaleno\n"); 
	return 0;
}
