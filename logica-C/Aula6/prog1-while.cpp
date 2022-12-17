/*
  Faça um programa que receba 7 numeros e no final informe a quantidade de numeros pares e quantidades de impares.

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	int numero, contador, totalPar, totalImpar;
	contador = 0;
	totalPar = 0;
	totalImpar = 0;
	
	while(contador < 7){
		
		printf("Informe um numero: ");
		scanf("%d", &numero);
		
		// Se o resto da divisao por 2 for igual a zero.
		if ((numero % 2) == 0){
			totalPar = totalPar + 1;
		}else{
			totalImpar = totalImpar + 1;
		}
		
		contador = contador + 1;
	}
	
	printf("Quantidade de pares: %d\n", totalPar);
	printf("Quantidade de impares: %d\n", totalImpar);
	
	system("pause");
}
