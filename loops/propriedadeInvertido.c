/* TheHuxley - Problema Propriedade do Invertido*/
#include <stdio.h>

int main(){
    int x,y, aux;
    scanf("%d %d", &x, &y);
    
    if(x >= 10 && y < 100) {
        while (x <= y) {
            if( x % 10 != 0 ){
                aux = x / 10;
                if(x % aux == 0)
                    printf("\n%d", x);
            }
            x++;
        }
    }
    return 0;
}