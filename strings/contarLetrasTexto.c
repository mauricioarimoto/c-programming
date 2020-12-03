// TheHuxley - Problemma #806 Contar letras em um texto
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int n=0,i=0,j=0,l=0,m=0,k=0,f=-1;
    scanf("%d", &n);
    char frase[n+1][100];

    for (i=0;i<=n+1;i++)
        fgets(frase[i], 100, stdin);
    
    for (i=n+1;i <= n+1;i++){
        for (j=0; j < strlen(frase[i]); j++){
            for (l=0;l<=n;l++){
                for (m=0; m < strlen(frase[l]);m++){
                    if (frase[i][j] == frase [l][m])
                        k++;
                }
            }
            f++;
            printf("%c = %d\n", frase[n+1][f],k);
            k=0;
        }
    }
    return 0;
}
