/*
	Programa que receba uma letra e informe se � uma vogal ou uma consoante
*/

#include<stdlib.h>
#include<stdio.h>

/*
	Operadores L�gicos
	= -> Atribui��o
	== -> Compara��o (igualdade)
	!= -> Compara��o (diferen�a)
	>= -> Maior ou igual
	<= -> Menor ou igual
	&& -> e
	|| -> ou
*/

main(){
	
	char letra;
	
	printf("Informe uma letra: ");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		
		printf("Letra %c e uma vogal", letra);
		printf("\n--------------------------\n");
		
	}else{
		printf("Letra %c e uma consoante", letra);
		printf("\n--------------------------\n");
	}

	system("pause");	
}


