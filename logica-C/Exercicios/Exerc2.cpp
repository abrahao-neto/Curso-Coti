/*
	Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
	Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
	
	 - Ter no mínimo 65 anos de idade.
	 - Ter trabalhado no mínimo 30 anos.
	 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
	 
	 Com base nas informações acima, faça um algoritmo que leia:
	 o ano de seu nascimento e o ano de seu ingresso na empresa.
	 O programa deverá escrever a idade e o tempo de trabalho do
	 empregado e também a mensagem 'Requerer aposentadoria' ou 'Não requerer'.
	
	Ex: 
	Entrada
	Ano de Nascimento: 1980
	Ano de ingresso na empresa: 
	
	Saída
	Idade: 42
	Tempo de trabalho: 22
	Não pode requerer aposentadoria
	


*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int anoNascimento, anoIngressoEmpresa, idade, tempoTrabalho;
	
	printf("\nInsira o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	printf("\nInsira o ano de ingresso na empresa: ");
	scanf("%d", &anoIngressoEmpresa);
	
	
	idade = 2022 - anoNascimento;
	tempoTrabalho = 2022 - anoIngressoEmpresa;
		
	if (idade >= 65){
		printf("Idade: %d. Pode requerer aposentadoria", idade);
	}
	if (tempoTrabalho >= 65){
		printf("Tempo de trabalho: %d. Pode requerer aposentadoria", tempoTrabalho);
	}
	if (idade >= 60 && tempoTrabalho >= 25){
		printf("Idade: %d. Tempo de trabalho: %d. Pode requerer aposentadoria", idade, tempoTrabalho);
	}
	else{
		printf("Nao pode requerer aposentadoria");
	}
	
	printf("\n_________________________________________________\n");
	system("pause");
}
