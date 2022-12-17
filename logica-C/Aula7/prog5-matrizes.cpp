/*
  MATRIZES: S�o estruturas para agrupar variaveis do mesmo tipo
  A matriz organiza a informa��o em duas dimens�es
  
  Programa que leia uma matriz do tipo 2x2
  - Imprimir os valores lidos
  
*/

#include<stdio.h>
#include<stdlib.h>

int numeros[2][2];

void entrada() {
	
	//linhas (i)
	for(int i = 0; i < 2; i++) {
		 
		//colunas (j)
		for(int j = 0; j < 2; j++) {
			printf("Informe o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
}



void saida() {
	
	//linhas (i)
	for(int i = 0; i < 2; i++) {
		
		//colunas (j)
		for(int j = 0; j < 2; j++) {
			printf("\nO valor da matriz[%d][%d]: %d ", i, j, numeros[i][j]);
			
		}
	}
}

main() {
	entrada();
	saida();
	
	system("pause");
}
