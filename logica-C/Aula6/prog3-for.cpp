/*
 Programa que receba um numero e informe a multiplicação de 0 a 10

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int numero, tabuada;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	for (int i = 0; i <= 10; i++){
		
		tabuada = numero * i;
		
		printf("%d x %d = %d \n", numero, i, tabuada);
	}
	
	system("pause");
}
