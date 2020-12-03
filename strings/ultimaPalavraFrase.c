//TheHuxley - Problema #248 Ultima palavra de uma frase
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[400];
    int i, last = 0;

    fgets(str,400+1,stdin);

    for(i=0; i<strlen(str); ++i){
        if(str[i]==' ')
            last = i;
    }

    if(last > 0){
        for(i=last; str[i] != '\0'; ++i)
            printf("%c",str[i]);
    }
    else
        printf("%s",str);
	return 0;
}