#include <stdio.h>
#include <conio.h>

//2 - Escreva uma função que leia 4 números, 
//após a leitura multiplique todos e retorne o resultado. 
//Está função deverá ser chamada através do programa principal. 
//Exibir conteúdo retornado.

int mult_quatro_numeros(){
	int n1, n2, n3, n4;
	float mult;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	printf("Informe outro numero: ");
	scanf("%d", &n2);
	printf("Informe outro numero: ");
	scanf("%d", &n3);
	printf("Informe outro numero: ");
	scanf("%d", &n4);
	mult = n1 * n2 * n3 * n4;
	return mult;
}

void main(){
	float mult;
	mult = mult_quatro_numeros();
	printf("Multiplicacao: %0.2f", mult);
}
