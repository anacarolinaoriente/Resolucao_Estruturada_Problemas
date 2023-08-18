#include <stdio.h>
#include <conio.h>

//7 - Escreva um procedimento que ao realizar a leitura de um número qualquer, 
//seja capaz de verificar se o mesmo é positivo ou negativo. Fazer a chamada no programa principal.

int num_positivo_negativo(){
	int num;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("Numero Positivo");
	}
	else{
		if(num < 0){
			printf("Numero Negativo");
		}
		else{
			printf("Neutro");
		}
	}
}

void main(){
	num_positivo_negativo();
}
