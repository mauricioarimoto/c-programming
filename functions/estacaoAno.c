/* TheHuxley - Problema Estacao do ano */
#include <stdio.h>

void estacaoAno(int dia, int mes){
   switch(mes){
      case 1: printf("VERAO\n");
      break;
      case 2:
         if(dia <= 28)
            printf ("VERAO\n");
      break;
      case 3:
         if (dia <= 20)
            printf ("VERAO\n");
         else
            printf ("OUTONO\n");
      break;
      case 4: printf("OUTONO\n");
      break;
      case 5: printf("OUTONO\n");
      break;
      case 6:
         if (dia <= 20)
            printf ("OUTONO\n");
         else
            printf ("INVERNO\n");
      break;
      case 7: printf ("INVERNO\n");
      break;
      case 8: printf ("INVERNO\n");
      break;
      case 9:
         if (dia <= 20)
            printf ("INVERNO\n");
         else
            printf ("PRIMAVERA\n");
      break;
      case 10: printf ("PRIMAVERA\n");
      break;
      case 11: printf ("PRIMAVERA\n");
      break;
      case 12:
         if (dia <= 20)
            printf ("PRIMAVERA");
         else
            printf ("VERAO\n");
      break;
    }
}

int main() {
   int dia, mes;
   scanf("%d%d", &dia, &mes);
   estacaoAno(dia, mes);
}