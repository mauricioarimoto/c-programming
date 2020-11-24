/* 
   TheHuxley - Problema multiplo de cinco
*/
#include <stdio.h>

int main() {
	int m, n, i;
	scanf ("%d%d", &m,&n);

	for (i=m; i<=n; i++){
    	if (i%5 == 0) { //verifica quais sao multiplos de 5
    		// depois do último múltiplo, não existe o caractere |
        	if (i!=m && i!= m+1 && i!=m+2 && i!=m+3 && i!=m+4) {
            	printf ("|");
        	}
            printf ("%d", i);
        }
    }
 	return 0;
}
