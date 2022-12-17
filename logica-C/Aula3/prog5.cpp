#include<stdio.h>
#include<stdlib.h>
	
main(){
	
	/*
	  Faça um programa que leia o preço de 2 produtos e calcule o total.
	  Se o total for maior ou igual a 1000
	  O valor total ganhar um desconto de 100.
	  
	  ex:
	  Produto 1 -> 700
	  Produto 2 -> 500
	  Total -> 1200
	  Total com desconto -> 1200 - 100
	*/
	
	float prod1, prod2, total;
	
    printf("\nInforme o valor do produto 1: ");
	scanf("%f", &prod1);
	
	printf("\nInforme o valor do produto 2: ");
	scanf("%f", &prod2);
	
	total = prod1 + prod2;
	
	
	if (total >= 1000)
	{
		total = total - 100;
		printf("\nValor total com desconto e: %.2f", total);
	}
	else
	{
		printf("\nO valor total e: %.2f", total);
	}
	
}
