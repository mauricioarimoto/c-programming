/* TheHuxley - Problema Reserva de passagens */
#include <stdio.h>

int main(){
    
   int voos[37], poltronasLivres[37];
   int i, identificacaoCliente, numeroVooDesejado, vooValido;
    
   for(i = 0; i < 37; i++)
      scanf("%d%d", &voos[i], &poltronasLivres[i]);
    
   //entrada de dados dos pedidos de reserva termina qd doc do cliente for 9999
   while(identificacaoCliente != 9999){
      vooValido = 0;
      scanf("%d%d", &identificacaoCliente, &numeroVooDesejado);
        
      for(i = 0; i < 37; i++){
         if(numeroVooDesejado == voos[i])
            vooValido++;
      }
        
      if(identificacaoCliente == 9999)
         break;
        
      if(vooValido > 0){
         for(i = 0; i < 37; i++){
            if(numeroVooDesejado == voos[i]){
               if(poltronasLivres[i] > 0){
                  printf("%d\n", identificacaoCliente);
                  poltronasLivres[i]--; 
               }
               else
                printf("INDISPONIVEL\n");
            }
         }
      }
      else
         printf("INDISPONIVEL\n");  
   }
    return 0;
}
