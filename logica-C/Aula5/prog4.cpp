#include<stdio.h>
#include<stdlib.h>

/*
  Faça um programa que leia 10 numeros e imprima a soma deles

  
*/

main(){
	
	int contador, numero, total;
	
	contador = 1;
	total = 0;
	
	while(contador <= 10){
		
		printf("Insira um numero: ");
		scanf("%d", &numero);
		
		total = total + numero;
		
		contador = contador + 1;
	}
	
	printf("\nTotal: %d", total);
	printf("\n__________________\n");
	
	system("pause");
}
