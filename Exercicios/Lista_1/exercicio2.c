#include <stdio.h>
#include <conio.h>

//2. Escreva um programa para ler as dimensões de uma cozinha retangular 
//(comprimento, largura e altura), calcular e escrever a quantidade de caixas de azulejos 
//para se colocar em todas as suas paredes (considere que não será descontada a 
//área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2.

void main(){
	
	float comp, larg, alt, quantcaixa, area;
	
	printf("Informe o comprimento da cozinha: ");
	scanf("%f", &comp);
	printf("Informe a largura da cozinha: ");
	scanf("%f", &larg);
	printf("Informe a altura da cozinha: ");
	scanf("%f", &alt);
	
	area = ((comp * alt) * 2) + ((alt * larg) * 2);
	
	quantcaixa = area / 1.5;
	
	printf("\nArea Total: %0.2f", area);
	printf("\nQuantidade de caixa: %0.2f", quantcaixa);
	
}
