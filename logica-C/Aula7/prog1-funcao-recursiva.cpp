/*
  Recursividade
  É quando uma função tem uma chamada a ela mesma
  
  Ex:
  
  void nomeFuncao() {
  
	 condicao() {
	    nomeFuncao();
	 }
  }

*/

#include<stdio.h>
#include<stdlib.h>

int n = 0;

void imprimirRecursivo() {
	n = n + 1;
	printf("\nRecursivo %d", n);
	
	if (n < 5) {
		imprimirRecursivo();
	}
}

main(){
	imprimirRecursivo();
	
	system("pause");
}
