/* TheHuxley - Problema do fatorial  */
#include <stdio.h>

int main() {
	int n, fatorial;

	printf("Digite um numero inteiro:\n");
  	scanf("%d", &n);
	
	fatorial = 1;
	
	while (n > 0) {
    	fatorial = fatorial *  n;
    	n--; 
  	}
  	printf("Fatorial: %d\n", fatorial);
	return 0;
}