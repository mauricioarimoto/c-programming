/* 
    TheHuxley - Problema Zerinho ou um
   @mauricio 
*/

#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a == b && a == c) //qdo nao ha vencedor
   		printf("*\n");
	
	else if (a == b) //c vencedor
		printf("C\n"); 
	
	else if(a == c)  //b vencedor
		printf("B\n"); 
	
	else //a vencedor
		printf("A\n");
	
	return 0;
}
