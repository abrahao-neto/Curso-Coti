#include<stdio.h>
#include<stdlib.h>

/* 
   O program devera receber 2 numeros (floats)
   a saida devera ser:
   
   - a soma dos 2 numeros
   - a subtração 
   - a divisão
   - a multiplicação
   
   n1 -> 10
   n1 -> 2
   
   A soma é: 12
   A subtração é: 8
   A multiplicação é: 20
   A divisão é: 5
*/

main(){
	
	float subtracao, soma, multiplicacao, divisao, n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	subtracao = n1 - n2;
	soma = n1 + n2;
	multiplicacao = n1 / n2;
	divisao = n1 * n2;
	
	printf("\nSubtracao: %.2f", subtracao);
	printf("\nsoma: %.2f", soma);
	printf("\nmultiplicacao: %.2f", multiplicacao);
	printf("\ndivisao: %.2f", divisao);
	printf("\n-------------------------------------------\n\n");
	
	system("pause");
	
}
