#include <stdio.h>
#include <conio.h>

//4.	Escreva uma fun��o que receba a Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea.

float calcula_area(float larg, float comp){
	float area;
	area = larg * comp;
	return area;
}

void main(){
	float area, larg, comp;
	printf("<<Area de uma quadrado/retangulo>>\n\n");
	printf("Informe a largura: ");
	scanf("%f", &larg);
	printf("Informe o comprimento: ");
	scanf("%f", &comp);
	area = calcula_area(larg, comp);
	printf("Area: %0.2f", area);
}
