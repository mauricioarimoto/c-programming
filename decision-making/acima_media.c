/* TheHuxley - Problema Acima da media
   @mauricio
*/

#include <stdio.h>

int main() {
	float num1, num2, num3, media;
	int quant = 0;
	
	scanf("%f\n%f\n%f", &num1, &num2, &num3);
	media = (num1 + num2 + num3) / 3;
	
	if (num1 > media) 
	    quant++;
	
	if (num2 > media)
		quant++;
	
	if (num3 > media) 
		quant++;
	
	printf("%d\n", quant);
	return 0;
}

