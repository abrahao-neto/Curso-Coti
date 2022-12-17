#include<stdio.h>
#include<stdlib.h>

/*
   Um programa que leia a base e a altura de um triangulo
   Saída -> Calculo da area
*/

main(){
	
	float base, altura, area;
	printf("Digite a base: ");
	scanf("%f", &base);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	//Formula 
	area = (base * altura) / 2;
	
	printf("\na area e: %.2f", area);
	printf("\n----------------------------\n\n");
	
	system("pause");
}


