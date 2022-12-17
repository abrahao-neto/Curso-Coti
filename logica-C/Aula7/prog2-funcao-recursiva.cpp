/*
  Programa que efetue a entrada de numeros digitados de forma recursiva
  
  1 - O programa deve interromper a entrada dos numeros quando o valor for 0;
  2 - Calcular a soma de todos os numeros digitados

*/

#include<stdio.h>
#include<stdlib.h>

int numero, soma;

void entradaRecursiva() {
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	soma = soma + numero;
	
	if (numero != 0) {
		entradaRecursiva();
	}else{
		printf("A soma dos numeros e: %d", soma);
	}
}

main() {
	entradaRecursiva();
	system("pause");
}
