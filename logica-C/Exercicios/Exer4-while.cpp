/*
  Exercício 2- Programa que receba o valor de 10 produtos e exiba o valor total da compra.
  Se o total da compra for acima de 1000, aplicar 15% de desconto. 

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int contador = 0;
	float valor, total, desconto;
	total = 0;
	
	while(contador < 10){
		
		printf("Valor do produto: ");
	    scanf("%f", &valor);
		
		total = total + valor;
		
		contador = contador +1;
	}
	
	printf("\n_________________________________\n");
	printf("\nO valor total da compra: %.2f\n", total);
	
	if (total > 1000){
		desconto = (total * 15) / 100;
		total = total - desconto;
		printf("\nVoce ganhou 15 porcento de desconto\n");
		printf("\nValor com desconto: %.2f\n", total);
	}
	
	system("pause");
}
