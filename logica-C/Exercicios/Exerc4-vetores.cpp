//Exerc�cio.

/*
Escreva um programa que leia um vetor de 5 posi��es.

A) Calcular a quantidade de n�meros pares e �mpares dentro do vetor.

B) Imprimir os valores encontrados

Entrada:
n�meros = 10, 20, 30, 3, 5

Sa�da:
exibir 'qtd par = 3'. 'qtd impar = 2'
*/

#include<stdio.h>
#include<stdlib.h>

int numeros[5];

void entrada() {
	
	for(int i = 0; i < 5; i++) {
		printf("informe um numero: ");
	    scanf("%d", &numeros[i]);
	}

}

int calcularPar() {
	int count = 0;
	
	for(int i = 0; i < 5; i++) {
		if (numeros[i] % 2 == 0) {
			count++;	
		}	
	}
	return count;
	
}

int calcularImpar() {
	int count = 0;
	
	for(int i = 0; i < 5; i++) {
		if (numeros[i] % 2 != 0) {
			count++;
		}	
	}
	return count;
}

void saida() {
	printf("\nQuantidade de numeros pares: %d", calcularPar());
	printf("\nQuantidade de numeros impares: %d", calcularImpar());
}


main() {
	entrada();
    saida();
    printf("\n________________________________\n");
	
	system("pause");
	
}
