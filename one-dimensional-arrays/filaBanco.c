/* TheHuxley - Problema Fila de banco */
#include <stdio.h>

int fila(int fila1[], int fila2[2], int m, int n, int k) {
   int x, comp;

   if(n >= m)
      comp = n;
   if(n <= m)
      comp = m;
  
   if(k == 1) {
      for(x = 0; x < comp; x++) {
         if(m > x) 
            printf("%d\n", fila2[x]);
         if(n > x)
            printf("%d\n", fila1[x]);
      }
   } 
   else if(k == 2) {
      for(x = 0; x < comp; x++) {
         if(n > x)
            printf("%d\n", fila1[x]);
         if(m > x)
         printf("%d\n", fila2[x]);
      }
   }
}

int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);
  int fila1[n];
  int fila2[m];
  int x = 0, comp;

  for(x = 0; x < n; x++) 
    scanf("%d", &fila1[x]);
  
  for(x = 0; x < m; x++)
    scanf("%d", &fila2[x]);

   fila(fila1, fila2, m, n,k);
  return 0;
}
