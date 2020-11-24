/* The Huxley - Problema Produtos dos Primos */
#include <stdio.h>

int VerificaNumPrimo (int n){
   int verificador = 0;
   int cont;

    for(cont = 1 ; cont <= n ; cont++){
        if(n % cont == 0){
            verificador ++;
        }
    }
    return verificador;
}
int main () {
    int n, verificador;
    int total = 1;
    int i;

    for(i=1; i <= 4 ; i++){
        scanf("%d", &n);
        
        verificador = VerificaNumPrimo (n);
        
        if(verificador == 2){
            total = total * n;
        }else {
            total = 0;
        }
    }

    if(total == 0){
        printf("SEM PRODUTO");
    } else {
        printf("%d", total);
    }

    return 0;
}
