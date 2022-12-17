/*
  	Exercício:
		Parte 1-
		Fazer o programa do IMC utilizando o conceito de função
		
		Entrada (Informar o peso e a altura)
		Processamento (Executar a fórmula e retornar o IMC)
		Saída (Exibir o resultado do IMC)
		
		Parte 2- 
		Após a saída, verificar se a pessoa está: Normal, Magra, Obesa...
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//float peso, altura;

float peso, altura;

void entrada(){
	
	printf("\nInforme o peso: ");
	scanf("%f", &peso);
	
	printf("\nInforme a altura: ");
	scanf("%f", &altura);
}

float processamentoIMC(){
	float IMC = peso / pow(altura, 2); 
	
	return IMC;
}

void saida(){
	
	float saidaIMC = processamentoIMC();
	printf("\nO resultado do IMC e: %.2f", saidaIMC);
}

/*
   	Menor que 18.5 - Abaixo do peso 
	Entre 18.5 e 24.9 - Peso normal 
	Entre 25.0 e 29.9 - Pré-obesidade 
	Entre 30.0 e 34.9 - Obesidade Grau 1 
	Entre 35.0 e 39.9 - Obesidade Grau 2 
	Acima de 40 - Obesidade Grau 3
*/

void imc(){
	float IMC = processamentoIMC();
	if (IMC <= 18.5){
		printf("\nAbaixo do peso");
	}
	else if (IMC <= 24.5){      // peso: 56.7, altura: 1.75 = res = 18.51
		printf("\nPeso normal");
	}
	else if (IMC <= 29.9) {     // peso: 75.1, altura: 1.75 = res = 24.52
		printf("\nPre-obesidade");
	}
	else if (IMC <= 34.9){      // peso: 91.6, altura: 1.75 = res =  29.91
		printf("\nObesidade Grau 1");
	}
	else if (IMC <= 39.9){      // peso: 106.9, altura: 1.75 = res =  34.91
		printf("\nObesidade Grau 2");
	}
	else {                       // peso: 122.3, altura: 1.75 = res =  39.93
		printf("\nObesidade Grau 3");
	}
}


main(){
	
	entrada();
	processamentoIMC();
	saida();
	imc();
	
	printf("\n________________________\n");
	
	system("pause");
	
}
