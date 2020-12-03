/* TheHuxley - Problema #253 As duas string sao iguais?*/

#include <stdio.h>
#include <string.h>

int main() {
 	char str1[50], str2[50];
 	int resultado;

 	gets(str1);
 	gets(str2);

 	if (strcmp(str1, str2) == 0)
   		printf("IGUAIS\n");
 	else
   		printf("DIFERENTES\n");
 	return 0;
} 