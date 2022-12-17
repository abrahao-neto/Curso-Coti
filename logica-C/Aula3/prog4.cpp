#include<stdio.h>
#include<stdlib.h>
	
main(){
	
	/*
	Faça um programa que leia o valor de um salario e um percentual de aumento.
	Imprimir o novo valor do salario.
	*/
	
	float salario, percentual, novoSalario;
	
	printf("\nInforme o valor do salario: ");
	scanf("%f", &salario);
	
	printf("\nInforme o percentual de aumento: ");
	scanf("%f", &percentual);
	
	novoSalario = salario * (percentual / 100) + salario;
	
	printf("\nO novo salario a receber e: %.2f", novoSalario);
	printf("\n------------------------------------------------");
	
	system("pause");
	
}
