/* 
   TheHuxley - Problema brinquedo no parque 
   @mauricio 
*/
#include <stdio.h>
int main() {

    int f, i;
    int quantidade = 0;

    //le altura (em cm) e idade da pessoa
    scanf("%d%d", &f, &i);

    //Barca Viking: 1,5m de altura e 12 anos.
    if (f >= 150 && i >= 12) 
     	quantidade+=1; 

   //Elevator of Death: 1,4m de altura e 14 anos
	if (f >= 140 && i >= 14) 
    	quantidade+=1;
    
    //Final Killer: 1,7m de altura ou 16 anos.
	if (f >= 170 || i >= 16) 
   		quantidade+=1;
    
    //numero de brinquedos q a pessoa pode andar
    printf("%d\n", quantidade); 
    return 0;
}
