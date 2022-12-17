#include<stdio.h>
#include<stdlib.h>

/*
  Estrutura de repeticao ENQUANTO (WHILE)
  
  enquanto(condicao verdadeiro){
    //executa
  }
 
 Programa que imprima 10 linhas

  
*/


main(){
	int contador = 1;
	
	while(contador <= 10){
		printf("\nNumero: %d", contador);
		
		contador = contador + 1; // add +1 ao contador
		
	}// fim do loop
	
	printf("\nObrigado por usar o programa");
}

