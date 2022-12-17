#include<stdio.h>
#include<stdlib.h>

main(){

	float nota1, nota2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 6)
	{
		printf("\nMedia %.1f - APROVADO", media);
	}else
	{
		printf("\nMedia %.1f - Reprovado", media);
	}
    printf("\n-----------------------------------");
	system("pause");
	
}
