/* TheHuxley - Problema Media de n numeros*/
#include <stdio.h>
#include <math.h>

int main() {
  int i, quant=0;
  float count=0, total=0, var=0, media=0;
  float vetor[10000];

  for (i=0; ; ++i) {
    scanf("%f",&vetor[i]);
    if(vetor[i]== -1) 
      break;
    quant++;
  }

  for (i=0 ; i < quant ;++i) //somatoria
    total += vetor[i];
  media = total / quant;

  for(i=0 ; i < quant ;++i) //somatoria
    var += pow((vetor[i] - media), 2);

  var /= quant-1;
  for(i=0; i < quant;++i) { //Maior que media
    if(vetor[i] > media) 
        ++count;
  }

  printf("%.2f\n", media);
  printf("%.2f\n", sqrt(var));
  printf("%.0f\n", count, quant);
  return 0;
}
