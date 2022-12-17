/*
  Programa que leia 2 numeros
  
  1 - O programa devera conter um menu com as 4 operações básicas da matematica
  2 - Imprimir o valor da operção escolhida.
  
  Menu
  1 - Adição
  2 - Subtração
  3 - Mutiplicação
  4 - Divisão

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int opcao;
	float n1, n2, resultado;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Insira o segundo numero: ");
	scanf("%f", &n2);
	
	// Imprimir o menu de opções
	printf("\n_________________________\n");
	printf("\nMenu");
	printf("\n1 - Adicao");
	printf("\n2 - Subtracao");
	printf("\n3 - Mutiplicacao");
	printf("\n4 - Divisao");
	printf("\n_________________________\n");
	
	printf("\nEscolha uma opcao para fazer a operacao dos numeros: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			resultado = n1 + n2;
			break;
	
		case 2:
			
			if (n2 > n1){
				printf("\nO segundo numero nao pode ser maior que o primeiro porque sera um numero negativo.");
				
			}
			else{
				resultado = n1 - n2;
			    break;
			}
	
		case 3:
		    resultado = n1 * n2;
			break;
		
		case 4:
			
			if (n1 == 0 || n2 == 0){
				printf("\nNao pode ser dividido por 0");
			}
			else{
				resultado = n1 / n2;
			    break;
			}
		    
		default:
			printf("\nOpcao invalida!");
			break;		
	}
	
	printf("\nResultado: %.1f", resultado);
	printf("\n_________________________\n");
	

	
	
	system("pause");
}
