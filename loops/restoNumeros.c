/*   TheHuxley - Problema Resto entre numeros  */
#include <stdio.h>
 
int main() {
   int x, y, i,aux;
   scanf("%d%d",&x, &y);

   //numeros podem n estar em ordem crescente
   if (x > y) {
   	aux = x;
      x = y;
      y = aux;
   }

   for(i = x+1; i < y; i++) {    

      //quando resto for 2
      if (i % 5 == 2)
         printf("%d\n",i);
      
      //quando resto for 3
      else if (i % 5 == 3)
         printf("%d\n",i);
    }
    return 0;
}
