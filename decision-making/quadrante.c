/* 
    TheHuxley - Problema do Quadrante
    @mauricio 
*/

#include <stdio.h>

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	
	if(x == 0 && y == 0) 
	    printf("origem\n");

	else if(x == 0 && y != 0) 
	    printf("eixo y\n"); //eixo y quando a coordenada x é zero.
	
	else if(x != 0 && y == 0) //eixo x quando a coordenada y é zero.
	    printf("eixo x\n");
	
	else if(x > 0 && y > 0) //primeiro quadrante
	    printf("primeiro\n");
	
	else if(x < 0 && y > 0) //segundo 
	    printf("segundo\n");
	
	else if(x < 0 && y < 0) //terceiro 
	    printf("terceiro\n");
	
	else 
	    printf("quarto\n"); //quarto
	return 0;
}
