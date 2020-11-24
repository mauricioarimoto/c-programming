/* 
    TheHuxley - Problema da Mercearia Ambrosina
    @mauricio */
#include <stdio.h>

int main() {
	int codigo, quantidade;
	float preco, desconto, valor_total;
	
	scanf("%d\n%d", &codigo, &quantidade);
	
	switch(codigo){
		case 1: preco = 5.3; break;
		case 2: preco = 6.0; break;
		case 3: preco = 3.2; break;
		case 4: preco = 2.5; break;
		default: break;
	}

	valor_total = quantidade * preco;

	//verifica se desconto é aplicavel
	if(quantidade >= 15 || valor_total >= 40){ 
		desconto = valor_total * 0.15;
		valor_total = valor_total - desconto;
	} 
	printf("R$ %.2f",valor_total);
    return 0;	
}
