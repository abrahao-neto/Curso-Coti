#include<stdio.h>
#include<stdlib.h>
	
main(){
	
	float peso, altura, imc;
	
	printf("\nInforme o peso: ");
	scanf("%f", &peso);
	
	printf("\nInforme a altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("O IMC e: %.2f", imc);
	
	/*
	http://dontpad.com/
	MENOR QUE 18,5	MAGREZA	0
	ENTRE 18,5 E 24,9	NORMAL	0
	ENTRE 25,0 E 29,9	SOBREPESO	I
	ENTRE 30,0 E 39,9	OBESIDADE	II
	MAIOR QUE 40,0	OBESIDADE GRAVE	III
	*/
	
	if(imc < 18.5)
	{
		printf("\nClassificacao: Magreza");
	}
	
	else if(imc >= 18.5 && imc <= 24.9)
	{
		printf("\nClassificacao: Normal");
	}
	
	else if(imc >= 25 && imc <= 29.9)
	{
		printf("\nClassificacao: Sobrepeso I");
	}
	
	else if(imc >= 30.0 && imc <= 39.9)
	{
		printf("\nClassificacao: Obesidade II");
	}
	else
	{
		printf("\nClassificacao: Obesidade Grave III");
	}
	printf("\n---------------------------------------------");
	system("pause");
}
