/* 
    TheHuxley - Problema media de alunos
    @mauricio */

#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;

	scanf("%f%f%f", &nota1, &nota2, &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	if(media >= 7)
		printf("aprovado\n");
	
	else if(media < 3)
		printf("reprovado\n");
	
	else 
		printf("prova final\n");
	
	return 0;
}
