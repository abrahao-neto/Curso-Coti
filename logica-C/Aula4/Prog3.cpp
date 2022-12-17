/*
  Programa que receba um numero entre 0 e 100.
  - Informar se o numero é impar ou par
  % -> resto
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int numero, resto;
	
	printf("Informe um numero entre 0 e 100: ");
	scanf("%d", &numero);
	
	if (numero >= 0 && numero <= 100){
		
		resto = numero % 2;
		
		if (resto == 0){
			printf("Numero %d e par", numero);
		}
		else{
			printf("Numero %d e impar", numero);
		}
	}
	else {
		printf("Numero invalido!!!");
		
	}
	
	system("pause");
}
