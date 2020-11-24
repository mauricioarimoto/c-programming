/* 
    TheHuxley - Problema menor de 3 
    @mauricio 
*/

#include <stdio.h> 

int main() {
	
	int a, b, c, menor;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	menor = a; //assumindo que a é o menor

	if (b < menor) 
		menor = b;

	if (c < menor) 
		menor = c;

	printf("%d\n", menor);
	return 0;
}
