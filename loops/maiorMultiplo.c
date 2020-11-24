/*  TheHuxley - Problema maior multiplo  */
#include <stdio.h>

int main() {
    int m, n, count, multiplo;
    
    scanf("%d%d",&m,&n);
    multiplo = 0;
    if (count < m && count < n) {
        count = n;
        while (count > m && count <= n) {
            if (count % m == 0){
                multiplo++;
                printf("%d\n", count);
                count = 0;
            }
            count--;
        }
        if(multiplo == 0)
            printf("sem multiplos menores que %d", n);
    }
	return 0;
}