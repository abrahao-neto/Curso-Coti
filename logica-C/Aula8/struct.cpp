/*
 STRUCT 
 Estrutura usada para agrupar variaveis de tipos diferentes
 
 Programa que leia os dados de uma pessoa
 [nome, idade, sexo]
 
 Imprimir os valores

*/

#include<stdio.h>
#include<stdlib.h>

struct Pessoa{
	char nome[20];
	int idade;
	char sexo;
};

//Variável -> p é uma variável do tipo Pessoa // p é um alias(apelido) do grupo Pessoa
struct Pessoa p;

void entrada() {
	printf("Informe o nome: ");
	scanf("%s", &p.nome);
	
	printf("Informe a idade: ");
	scanf("%d", &p.idade);
	
	printf("Informe o sexo (m/f): ");
	scanf("%s", &p.sexo);
}

void saida() {
	printf("\nDados da pessoa: ");
	printf("\nO nome e: %s", p.nome);
	printf("\nA idade e: %d", p.idade);
	printf("\nO sexo e: %c", p.sexo);
	
}

main() {
	entrada();
	saida();
	printf("\n__________________________\n");
	
	system("pause");
}
