/* 
    TheHuxley - Problema Loop de Impares
*/
#include <stdio.h>

int main() {
	int impar, n, m;
	scanf("%d\n%d", &n, &m);
	
	for(impar=n; impar <= m; impar++) {
	    if(impar % 2 != 0) 
	        printf("%d\n", impar);
	}
	return 0;
}
