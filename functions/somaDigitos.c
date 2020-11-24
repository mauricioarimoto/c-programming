/* TheHuxley - Problema Soma digitos */
#include <stdio.h>

int somaDigitos(int numero) {
    int soma = 0;

    while (numero != 0) {
        soma   += numero % 10;
        numero  = numero / 10;
    }
    return soma;
}

int main() {
	int numero, soma;
	scanf("%d", &numero);
	soma = somaDigitos(numero);
	printf("%d", soma);
}
