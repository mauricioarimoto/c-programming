/* TheHuxley - Problema Matriculas Duplas 
   @mauricio */

#include <stdio.h>
#define T1 45
#define T2 30

void verificaMatriculaAlunos(int progII[], int progIII[]) {
   int i, j;
   for(i=0; i<T1; i++) {
      for(j=0; j<T2; j++) {
         if(progII[i] == progIII[j])
         printf("%d ", progIII[j]);
      }
   }
}

int main() {
  int progII[T1];
  int progIII[T2];
  int i, j;

  for(i=0; i<T1; i++) {
    scanf("%d", &progII[i]);
  }
  for(i=0; i<T2; i++) {
    scanf("%d", &progIII[i]);
  }
  verificaMatriculaAlunos(progII, progIII);
  return 0;
}ver
