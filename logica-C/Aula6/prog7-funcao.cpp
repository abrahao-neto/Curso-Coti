/*
  Programa que leia 2 numeros
  1 Calcular soma
  2 Calcular media
  
  Execucao
  Saida

*/

#include<stdio.h>
#include<stdlib.h>

float n1, n2, soma, media;

//Entrada dos dados
void entradaDados(){
	printf("Insira um numero: ");
	scanf("%f", &n1);
	
	printf("Insira outro numero: ");
	scanf("%f", &n2);
}

//Execucao
void calcularSoma(){
	soma = n1 + n2;
}

void calcularMedia(){
	media = soma / 2;
}
//Fim da execucao

//Saida de dados
void saida(){
	printf("\nA soma e: %.1f", soma);
	printf("\nA media e: %.1f", media);
}

main(){
	
	entradaDados();
	calcularSoma();
	calcularMedia();
	saida();
	
	printf("\n_______________________________________\n");
	
	entradaDados();
	calcularSoma();
	calcularMedia();
	saida();
	
	printf("\n_______________________________________\n");
	
	system("pause");
}
