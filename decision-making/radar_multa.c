/*
   TheHuxley - Problema devagar, olhe o radar
   @mauricio
*/


#include <stdio.h>

int main()
{
  float vel_via, vel_veiculo, diferenca;
  double multa = 0;
  int pontos = 0;

  //printf("Entre com a velocidade da via e do veiculo: ");
  scanf("%f\n%f", &vel_via, &vel_veiculo);

  //percentual em que a velocidade ultrapassou a maxima
  diferenca = vel_veiculo / vel_via;
  if (diferenca > 1) {

    if (diferenca <= 1.2) {
    
        multa = 85.13;
        pontos = 4;
    }
    
      else if (diferenca <= 1.5) {
        multa = 127.69;
        pontos = 5;
      }
      else {
        multa = 574.62;
        pontos = 7;
      }
    }
    printf("%.2lf\n%d\n", multa, pontos);
    return 0;
  }
