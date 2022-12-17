/*

Exercicio: Um programa que receba o valor unitario e a quantidade de um produto.
E calcule o valor total em estoque.

*/

#include<stdio.h>

main(){
	float ValorProduto;
	int QuantEstoque;
	float Total;
	
	printf("Informe o valor unitario do produto: ");
	scanf("%f", &ValorProduto);
	printf("Informe o total de quantidade de produto em estoque: ");
	scanf("%d", &QuantEstoque);
	
	Total = ValorProduto * QuantEstoque;
	
	printf("O Total do valor em estoque: %.2f", Total);
	
}
