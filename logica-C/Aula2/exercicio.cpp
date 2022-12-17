#include<stdio.h>
#include<stdlib.h>

/* 
   Um programa que receba o valor
   total de uma conta, o valor recebido
   e mostre o troco
*/

main(){
	float total, pagamento, troco;
	
	printf("\nInsira o valor da conta: ");
	scanf("%f", &total);
	
	printf("\nInsira o pagamento: ");
	scanf("%f", &pagamento);
	
	troco = pagamento - total;
	
	printf("troco: %.2f", troco);
	
	system("npause");
	
}
