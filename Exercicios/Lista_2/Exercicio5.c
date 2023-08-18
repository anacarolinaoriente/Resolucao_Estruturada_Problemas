#include <stdio.h>
#include <conio.h>

//5 - Escreva um procedimento que leia 4 números, após a leitura multiplique 
//todos e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.

int multiplicacao_quatro_numeros(){
	int n1, n2, n3, n4, mult;
	
	printf("Informe o numero um: ");
	scanf("%d", &n1);
	printf("Informe o numero dois: ");
	scanf("%d", &n2);
	printf("Informe o numero tres: ");
	scanf("%d", &n3);
	printf("Informe o numero quatro: ");
	scanf("%d", &n4);
	
	mult = n1 * n2 * n3 * n4;
	
	printf("\nResultado multiplicacao: %d", mult);
}

void main(){
	multiplicacao_quatro_numeros();
}
