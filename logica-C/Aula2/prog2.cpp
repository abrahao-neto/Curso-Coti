#include<stdio.h>
#include<stdlib.h>

/*
   IMC (Indice de massa corporal)
   
   Fa�a um programa que receba o peso e a altura de um a pessoa
   Saida do programa � o IMC atraves da formula (peso / altura * altura)
*/

main(){
	float peso, altura, imc;
	
	printf("\nInsira o seu peso: ");
	scanf("%f", &peso);
	
	printf("\nInsira a sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSeu IMC e: %.1f", imc);
	
	printf("\n---------------------------\n\n");
	
	system("pause");
	
	
}

