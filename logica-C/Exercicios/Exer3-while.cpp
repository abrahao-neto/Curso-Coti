/*
   Exercício 1- Programa que receba o valor de 10 produtos e exiba o valor total da compra.

*/


#include<stdio.h>
#include<stdlib.h>

main(){
	
	int contador = 0;
	float valor, total;
	total = 0;
	
	while(contador < 10){
		
		printf("Valor do produto: ");
	    scanf("%f", &valor);
		
		total = total + valor;
		
		contador = contador +1;
	}
	
	printf("\n_________________________________\n");
	printf("\nO valor total da compra: %.2f\n", total);
	
	system("pause");
}


