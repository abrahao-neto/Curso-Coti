#include<stdio.h>
#include<stdlib.h>
	
main(){
	
	/*
	Faça um programa que recebe o ano de nacimento de uma 
	pessoa e informe se ela pode votar
	Caso a idade seja entre 16 e 17 , maior que 65 informar que o voto e opcional
	Obs: Considere a eleicao dia 31/12/
	*/
	
	int anoNasc, idade;
	
	printf("\nInforme o seu ano de nascimento? ");
	scanf("%d", &anoNasc);
	
	idade = 2022 - anoNasc;
	
	if (idade >= 16 && idade < 18)
	{
		printf("\nVoce tem %d anos - Voto opcional", idade);
	}
	else if (idade >= 65)
	{
		printf("\nVoce tem %d anos - Voto opcional", idade);
	}
	else if (idade >= 18 && idade < 65)
	{
		printf("\nVoce tem %d anos - Voto obrigarorio", idade);
	}
	else
	{
		printf("\nVoce tem %d anos - Nao pode votar", idade);
	}
	printf("\n--------------------------------------------");
	system("pause");

}

	
