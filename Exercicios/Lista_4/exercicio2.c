#include <stdio.h>
#include <conio.h>

//2 - Escreva uma fun��o que leia 4 n�meros, 
//ap�s a leitura multiplique todos e retorne o resultado. 
//Est� fun��o dever� ser chamada atrav�s do programa principal. 
//Exibir conte�do retornado.

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
