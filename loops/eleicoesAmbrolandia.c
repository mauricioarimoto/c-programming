/* TheHuxley - Problema Eleicoes em Ambrolandia */
#include <stdio.h>

int main() {
   int voto;
   float alibaba = 0, alcapone = 0, nulo = 0, branco = 0, votoValido = 0;
   float percentualAlibaba, percentualAlcapone;

   do {
      scanf("%d", &voto);

      switch(voto){
         case 83:
            alibaba++;
            votoValido++;
         break;
         case 93:
            alcapone++;
            votoValido++;
         break;
         case 0:
            branco++;
            votoValido++;
         break;
         case -1:
         break;
         default:
            nulo++;
      }
   } while(voto != -1); //condiçao para terminar a eleicao

   printf("%.0f\n%.0f\n%.0f\n%.0f\n", alibaba, alcapone, branco, nulo);

   //quem venceu a eleicao
   if (alibaba > alcapone) 
      printf("83\n");
   else if(alcapone > alibaba)
      printf("93\n");

   //percentual de votos dos candidatos
   percentualAlibaba = (alibaba * 100) / votoValido;
   percentualAlcapone = (alcapone * 100) / votoValido;
   printf("%.2lf\n%.2lf\n", percentualAlibaba, percentualAlcapone);
   return 0;
}