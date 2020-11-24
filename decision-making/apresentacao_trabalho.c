/*  TheHuxley- Problema Apresentacao de trabalho 
     @mauricio 
*/
#include <stdio.h>
int main() {
    int n1,n2,n3,n4,n5;
    
    // le 5 números representados os requisitos
    scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);

    // n1 Inferface gráfica OU Inteligência Artificial
    if((n1 == 1  || n2 == 1) && n3 == 1 && n4 == 1 && n5 == 1) 
        printf("AVALIADO\n");
    else 
        printf("0");
    return 0;
}
