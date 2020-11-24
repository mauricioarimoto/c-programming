/* TheHuxley - Problema Alugando um veiculo
   @mauricio
*/

#include <stdio.h>

int main() {
    int quant_dias, km_total, cota_km;
    float vl_total = 0;
    
    scanf("%d %d", &quant_dias, &km_total); //le quantide de dias e km total
    
    cota_km =  quant_dias * 100; //cota de km
    
    if(km_total <= cota_km) 
        vl_total = 90 * quant_dias; //km normal

    else 
        vl_total = (quant_dias * 90) + ((km_total - cota_km) * 12); // km a mais

      printf("%.2f", vl_total); //valor total a pagar
    return 0;
}
