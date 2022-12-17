/*
 Função com retorno 
*/



#include<stdio.h>
#include<stdlib.h>

int calcularSoma(int n1, int n2){
	int soma = n1 + n2; 
	
	return soma; // Retorna para quem chamou a funcao
}

main(){
	
	int resultadoSoma;
	resultadoSoma = calcularSoma(10, 20);
	
	printf("\nSoma: %d", resultadoSoma);
	printf("\nSoma: %d", calcularSoma(10, 20));
	
	system("pause");
}
