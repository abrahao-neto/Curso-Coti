/*
	Programa que receba o salário de um vendedor e o valor total de suas vendas.
	Com base no valor total das vendas é necessário calcular sua comissão.
	
	Valor Total de vendas a partir de 5000 - comissão de 6% do valor total
	Valor Total de vendas abaixo de 5000 e acima de 3000 - comissão de 4% do valor total
	Valor Total de vendas abaixo de 3000 - comissão de 2% do valor total
	
	Exibir o salário base, total vendido, a comissão e o salário líquido. 
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
