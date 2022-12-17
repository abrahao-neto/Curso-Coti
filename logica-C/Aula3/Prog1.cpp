#include<stdio.h>
#include<stdlib.h>
	
main(){
	
	/*
	Faça um programa que recebe o ano de nacimento de uma 
	pessoa e informe se ela pode votar
	Obs: Considere a eleicao dia 31/12/
	*/
	
	int anoNasc, idade;
	
	printf("\nInforme o seu ano de nascimento? ");
	scanf("%d", &anoNasc);
	
	idade = 2022 - anoNasc;
	
	if(idade >= 16
	 )
	{
		printf("\nVoce tem %d anos - Pode votar", idade);
	}
	else
	{
		printf("\nVoce tem %d anos - Nao Pode votar", idade);
	}
	printf("\n--------------------------------------------");
	system("pause");

}

	
