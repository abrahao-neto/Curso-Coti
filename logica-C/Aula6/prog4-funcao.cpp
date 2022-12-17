#include<stdio.h>
#include<stdlib.h>


void imprimirDivisor(){
	printf("\n---------------------------------------\n");
}

void imprimirMensagem(){
	printf("\nObrigado por usar o sistema");
}
main(){
	
	int idade;
	char sexo;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	
	imprimirDivisor();
	
	printf("Digite o sexo: ");
	scanf("%s", &sexo);
	
	imprimirDivisor();
	
	printf("\nIdade: %d", idade);
	printf("\nSexo: %s", sexo);
	imprimirMensagem();
	
	system("pause");
	
	
	
}
