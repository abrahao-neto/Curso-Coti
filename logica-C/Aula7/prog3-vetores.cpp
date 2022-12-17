/*
  VETORES
  São estruturas utilizadas para guardar variaveis do mesmo tipo
  O vetor organiza a informação em UMA DIMENSÃO

*/

#include<stdio.h>
#include<stdlib.h>

int numeros[5];

void entrada() {
	
	for(int i = 0; i < 5; i++){
		printf("Informe um numero: ");
		scanf("%d", &numeros[i]);
	}
}

// Varres um vetor
void saida() {
	printf("\n_______________________________\n");
	
	for(int i = 0; i < 5; i++) {
		printf("Posicao [%d] -> %d", i, numeros[i]);
		printf("\n_______________________________\n");
	}
}

main() {
	entrada();
	saida();
	system("pause");
}


