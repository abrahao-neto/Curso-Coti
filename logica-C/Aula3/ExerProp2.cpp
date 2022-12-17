#include<stdio.h>
#include<stdlib.h>
	
main(){
	
	/*
	Escreva um programa que leia 2 numeros (n1, n2) e verifique: 
	Se o primeiro numero for maior que o segundo, imprimir a mensagem:
	"Primeiro maior que o segundo".
	Senão, imprimir a mensagem: "Segundo maior que o primeiro"
	
	*/
	
	int n1, n2;
	
	printf("Insira o primeiro numero: ");
    scanf("%f", &n1);

    printf("Insira o segundo numero: ");
    scanf("%f", &n2);
    
    if(n1 > n2)
	{
    	printf("\nO primeiro e maior");
	}
	if(n1 < n2)
	{
		printf("\nO segundo e maior");
	}
	if(n1 == n2)
	{
		printf("\nNumeros iguais");
	}
	printf("\n------------------------------");
	
	system("pause");

}

	
	
	

