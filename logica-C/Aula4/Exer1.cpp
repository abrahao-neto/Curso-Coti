/*
  Faça um programa que leia o sexo de uma pessoa ('m' / 'f')
  Se o sexo for diferente de 'm' e 'f', informar um erro
  
  -Se o sexo for 'm', verificar a idade da pessoa.
     --Se a idade for maior que 18, informar que o alistamento é obrigatorio
     --Senão informar que o alistamento não é obrigatorio
    
  -Se o sexo for 'f', informar que o alistamento não permitido
   char -> "%c"
  
  
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	char sexo;
	int idade;
	
	printf("Insira o sexo da pessoa 'm' ou 'f': ");
	scanf("%c", &sexo);
	
	if (sexo == 'm'){
		
		printf("\nInsira a idade: ");
	    scanf("%d", &idade);
		
		if (idade >= 18){
			printf("\nAlistamento obrigatorio!");
			printf("\n--------------------------\n");
		}
		else {
			printf("\nAlistamento nao obrigatorio!");
			printf("\n--------------------------\n");
		}
		
    }
	else if (sexo == 'f'){
		printf("\nAlistamento nao permitido!");
		printf("\n--------------------------\n");	
    }
	else{
		printf("\nDigite 'm' ou 'f'.");
		printf("\n--------------------------\n");
	}
	
	system("pause");
	
}
