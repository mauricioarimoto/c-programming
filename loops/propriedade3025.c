
#include <stdio.h>

int main() {
   int numero, parteA, parteB, resultado;
   
    while (1) {
      scanf("%d", &numero);
      parteA = (numero / 100);
      parteB = (numero % 100);
      resultado = (parteA + parteB);

      if (numero < 1000 || numero > 9999)
         break;

      else if (resultado * resultado == numero) 
         printf("propriedade do 3025!\n");
      
      else 
         printf("numero comum\n");
    }
   return 0;
}