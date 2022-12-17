/*
  Escreva um programa que leia um vetor de 5 posi��es.
  
  - Entrada (Leitura dos 5 numeros)
  - Fun��o (com retorno) para calcular a soma dos numeros
  - Fun��o (com retorno) para calcular a media dos numeros
  - Fun��o para imprimir a soma e a media

*/

#include<stdio.h>
#include<stdlib.h>

float numeros[5];
void entrada() {
	
	for(int i = 0; i < 5; i++) {
		printf("informe um numero: ");
	    scanf("%f", &numeros[i]);
	}
}

float calcularSoma() {
	float soma = 0;
	for(int i = 0; i < 5; i++) {
		soma = soma + numeros[i];
	}
	
	return soma;
}

float calcularMedia() {
    float media = calcularSoma() / 5;
	
	return media;
}


void saida() {
	
	printf("\nA soma e: %.1f", calcularSoma());
	printf("\nA media e: %.1f", calcularMedia());
}

main() {
	entrada();
	saida();
	printf("\n_______________________________\n");
	
	system("pause");
}
