/*
  Faça um programa que receba 3 numeros e exiba o maior deles
  
  ex:
  n1 -> 2
  n2 -> 1
  n3 -> 9
  
  Saida -> numero 9 e o maior;
  
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int n1, n2, n3;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Insira o terceiro numero: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3){
		printf("\nNumero %d maior", n1);
		printf("\n--------------------------\n");
		
	}
	else if (n2 > n1){
		printf("\nNumero %d maior", n2);
		printf("\n--------------------------\n");
	}
	else {
		printf("\nNumero %d maior", n3);
		printf("\n--------------------------\n");
	}
	
	system("pause");
}
