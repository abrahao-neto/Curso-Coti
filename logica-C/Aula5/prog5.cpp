/*
  Programa de tabuada de multiplicação
  É preciso ler um numero e exibir a tabuada até 10
  
  Ex: 10
  
  saída
  10 x 0 -> 0
  10 x 1 -> 10
  10 x 2 -> 20
  ...

*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	int contador, numero, total;
	contador = 0;
	total = 0;
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	while(contador <= 10){
		
		total = numero * contador;
		
		printf("%d x %d -> %d\n", numero, contador, total);
		
		contador = contador +1;
		
	}
	
	printf("Obrigado por usar o programa\n\n");
	
    system("pause");
}
