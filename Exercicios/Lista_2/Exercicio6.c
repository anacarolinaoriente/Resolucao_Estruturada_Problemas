#include <stdio.h>
#include <conio.h>

//6 - Escreva um procedimento que lei 3 números 
//e ao final subtraia o primeiro do segundo e dívida o 
//resultado pelo terceiro. Fazer a chamada no programa principal.

int sub_div(){
	int n1, n2, n3;
	float div, sub;
	
	printf("Informe o numero um: ");
	scanf("%d", &n1);
	printf("Informe o numero dois: ");
	scanf("%d", &n2);
	printf("Informe o numero tres: ");
	scanf("%d", &n3);
	
	sub = n1 - n2;
	div = sub / n3;
	
	printf("\nResultado subtracao: %0.2f", sub);
	printf("\nResultado divisao: %0.2f", div);
}

void main(){
	sub_div();
}
