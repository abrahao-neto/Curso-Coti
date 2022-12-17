/*
	Programa que receba o sal�rio de um vendedor e o valor total de suas vendas.
	Com base no valor total das vendas � necess�rio calcular sua comiss�o.
	
	Valor Total de vendas a partir de 5000 - comiss�o de 6% do valor total
	Valor Total de vendas abaixo de 5000 e acima de 3000 - comiss�o de 4% do valor total
	Valor Total de vendas abaixo de 3000 - comiss�o de 2% do valor total
	
	Exibir o sal�rio base, total vendido, a comiss�o e o sal�rio l�quido. 
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float salarioBase, totalVendas, comissao, salarioLiquido;
	
	printf("\nInforme o salario do vendedor: ");
	scanf("%f", &salarioBase);
	
	printf("\nInforme o valor total das vendas: ");
	scanf("%f", &totalVendas);
	
	if (totalVendas >= 5000){
		comissao = totalVendas * 0.06;
	}
	else if (totalVendas > 3000 && totalVendas < 5000){
		comissao = totalVendas * 0.04;
	}
	else {
		comissao = totalVendas * 0.02;
	}
	
	salarioLiquido = salarioBase + comissao;
	
	printf("\nSalario base: %.2f\nTotal vendido: %.2f\nComissao: %.2f\nSalario liquido: %.2f", salarioBase, totalVendas, comissao, salarioLiquido );
	printf("\n------------------------------------------------------------------------------------------------------------------\n");
	
	system("pause");
}
