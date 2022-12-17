#include<stdio.h>
#include<stdlib.h>

main(){
	
	/*
	Escreva um programa que leia um numero e imprima o seu antecessor e o seu sucessor.
	
	*/
	int numero, antecessor, sucessor;
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	
	antecessor = numero -1;
	sucessor = numero +1;
	
	printf("\nAntecessor: %d", antecessor);
	printf("\nSucessor: %d", sucessor);
	printf("\n-------------------------------");
	
	system("pause");
	
}
