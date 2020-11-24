/* 
    TheHuxley - Problema Decrescente3 
    @mauricio */

#include <stdio.h>

int main() {
   int n1, n2, n3, temp;      
   scanf("%d%d%d", &n1, &n2, &n3);
  
   if (n1 < n2) {  //troca o conteudo das variaveis n1 e n2 
      temp = n1;
      n1  = n2; 
      n2  = temp;
   }

   // Neste ponto n1 >= n2 
   if (n2 >= n3)    // n1 >= n2 e n2 >= n3 
      printf("%d\n%d\n%d\n", n1, n2, n3);

   else if (n1 >= n3)  /* n1 >= n3 e n3 > n2 */
	  printf("%d\n%d\n%d\n", n1, n3, n2);
 
   else /* n3 > n1 e n1 >= n2 */
	  printf("%d\n%d\n%d\n", n3, n1, n2);

   return 0;
}
