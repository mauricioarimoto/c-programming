/* 
   TheHuxley - Problema saldo do vovo
   @mauricio
*/

#include <stdio.h>

int main() {
    int numeroDiasPeriodo,saldoConta,saldoInicial, movimentacaoDiaria,menorSaldo,count, deposito;

    //le numero de dias do periodo (N) e saldo da conta no inicio do periodo (S)
    scanf("%d%d",&numeroDiasPeriodo, &saldoConta);

    saldoInicial = saldoConta;
    count = numeroDiasPeriodo;
    menorSaldo = saldoConta;

    do {
        //le movimentacao de um dia - valor positivo = deposito, valor negativo = retiradas
        scanf("%d",&movimentacaoDiaria);
        saldoConta += movimentacaoDiaria;
        
        //primeiro deposito depois da transacao
        if (count == numeroDiasPeriodo) 
            deposito = saldoConta; 

        if (menorSaldo >= saldoConta)
            menorSaldo = saldoConta;
        count--;

    } while (count > 0);
    
    //imprime menor valor de saldo da conta
    if (menorSaldo != saldoInicial)
        printf("%d\n",menorSaldo);

    //primeiro deposito depois da transacao
    else
        printf("%d\n", deposito); 
	return 0;
}
