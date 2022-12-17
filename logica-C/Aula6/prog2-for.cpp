/*
  Estrutura de repetição FOR
  
  Sintaxe
  
  FOR(contador: condicao; incremento){
  
  }

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int contadorWhile = 0;
	
	while(contadorWhile < 5){
		printf("\ncontador do While: %d", contadorWhile);
		contadorWhile = contadorWhile + 1;
	}
	
	for(int contadorFor = 0; contadorFor < 5; contadorFor = contadorFor + 1){
		printf("\nContador do for: %d", contadorFor);
	}
}
