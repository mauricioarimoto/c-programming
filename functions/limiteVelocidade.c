/* TheHuxley - Problema Limite de velocidade */
#include <stdio.h>

double calculaMulta (float vel) {
	double multa;
	
	if (vel <= 50) 
		multa = 0;
	
	else if(vel <= 55)
		multa = 230;
	
	else if (vel <= 60)
		multa = 340;

	else 
  		multa += 19.28 * (vel - 50);

  	return multa;
}

int main () {

	float velocidade;
	double multa;
	scanf("%f", &velocidade);
	multa = calculaMulta(velocidade);
	printf("%.2lf", multa);
	return 0;
}


