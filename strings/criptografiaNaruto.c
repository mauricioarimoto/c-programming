/* TheHuxley - Problema #1166 Criptografia de Naruto*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";
    char alfabetoInverso[26] = "zyxwvutsrqponmlkjihgfedcba";
    char frase[255];
    int tam, i, j;

    fgets(frase, 255, stdin);
    tam = strlen(frase);

    for(i = 0; i < tam; i++){
        for(j = 0; j < 26; j++){
            if(frase[i] == alfabeto[j]){
                frase[i] = alfabetoInverso[j];
                break;
            }
        }
    }
    puts(frase);
	return 0;
}
