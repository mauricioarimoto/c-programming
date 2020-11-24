/* TheHuxley - Problema O maior */

#include <stdio.h>
#include <stdlib.h> //funcao abs

int maiorAB(int a, int b, int c){
   int maior;
   maior = (a + b + abs(a-b)) / 2;
   maior = (maior + c + abs(maior - c)) / 2;
   return maior;
}

int main() {
	int x, y, z, total;
	scanf("%d%d%d", &x, &y, &z);
	total = maiorAB(x, y, z);
	printf("%i eh o maior\n", total);
}
