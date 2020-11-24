/* 
    TheHuxley - Problema do Igual ou diferente 
    @mauricio */

#include <stdio.h>

int main() {
	int n1,n2, n3;

	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 == n2 && n2 == n3)  //1 (Se todos os números são iguais)
		printf("\n1");
	
	else if (n1 != n2 && n2 != n3) //2 (Se todos os números são diferentes)
		printf("\n2");
	
	else 
		printf("\n3"); //3 (Se apenas dois números são iguais)

	return 0;
}
