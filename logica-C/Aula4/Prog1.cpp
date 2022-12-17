/*
   IF ENCADEADO / ANINHADO
   
   Programa que recebe 2 notas entre 0 e 10.
   Calcule a media das notas.
   Se a media for entre 0 e 5 - Reprovado
   Sse a media for entre 5.1 e 6.9 - Recuperacao
   Se a media for a partir de 7 - Aprovado

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	float nota1, nota2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	
	if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
		media = (nota1 + nota2) / 2;
		
		if (media >= 0 && media <= 5){
			printf("\nReprovado");
			printf("\n--------------------------\n");
		}
		else if (media >= 5 && media <= 7){
			printf("\nRecuperacao");
			printf("\n--------------------------\n");
		}
		else {
			printf("\nAprovado");
			printf("\n--------------------------\n");
		}
	}
	else{
		printf("Preencha as notas corretamente");
		printf("\n--------------------------\n");
	
	}
	
	system("pause");
}
