#include<stdio.h>
#include<stdlib.h>


main(){
	
	int numero = 1;
	
	switch (numero){
		
		// Mesma funcao do "if"
		case 1:
			printf("Numero igual a 1");
			break;
		
		case 2:
			printf("Numero igual a 2");
			break;
			
		case 3:
			printf("Numero igual a 3");
			break;
			
		// Mesma funcao do "else"	
		default:
			printf("Numero invalido!");
			break;	
			
	}
}
