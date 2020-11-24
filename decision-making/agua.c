/*  TheHuxley - Problema conta de agua
    @mauricio
*/

#include <stdio.h>

int main() {
    int n, valor_conta;
    scanf("%d", &n); //consumo em m³

    if (n <= 10) //consumo ate 10
        valor_conta = 7;

    else if (n <= 30) //consumo entre 11 e 30
        valor_conta = (n-10) + 7;

    else if (n <= 100) //consumo entre 31 e 100
        valor_conta = (n-30) * 2 + 27;
    
    else //consumo acima de 100
        valor_conta = (n-100) * 5 + 167; 
   
    printf("%d\n",valor_conta); 
	return 0;
}
