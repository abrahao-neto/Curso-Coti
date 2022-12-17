/*
 Função com parametros/argumentos

*/

#include<stdio.h>
#include<stdlib.h>


void imprimirNumero(int numero){
	printf("\nO numero informado e: %d", numero);
}

void calcularSoma(int n1, int n2){
	int soma = n1 + n2;
	printf("\nO resultado da soma e: %d", soma);
}

main(){
	
	imprimirNumero(60);
	calcularSoma(10 , 80);
	imprimirNumero(50);
	
	printf("\n___________________________________\n");
	system("pause");
	
}
