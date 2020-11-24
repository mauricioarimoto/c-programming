/* TheHuxley - Problema Escola de musica */
#include <stdio.h>

void classificaAluno(double media, int faltas){
   if (faltas <= 10) {
      if (media >= 9.5)
         printf("APROVADO COM LOUVOR");

      else if(media>=7 && media<9.5)
         printf("APROVADO");
      
      else
         printf("REPROVADO");

   } 
   else 
      printf("REPROVADO POR FALTAS");
}

int main() {
   
   double media;
   int faltas;
   scanf("%lf%i", &media, & faltas);
   classificaAluno(media, faltas);
}
