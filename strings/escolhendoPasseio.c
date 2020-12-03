#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//funcao strlwr implementada
char* strlwr(char* str) {
    char* aux = str;

    for (; *aux; aux++)
        *aux = tolower((unsigned char) *aux);
    return str;
}

int main(){
    char opcao[7];
    int i, count1=0, count2=0;
  
    for(i = 0; i < 7; i++){

        scanf("%s", opcao);
        strlwr(opcao);

        if (strcmp(opcao, "cinema") == 0) 
            count1++;
        else if (strcmp(opcao, "boliche") == 0) 
            count2++;
    }

    if(count1 > count2)
        printf("\nCINEMA\n");
    else if(count2 > count1)
        printf("\nBOLICHE\n");
}