#include <stdio.h>
#include <conio.h>

//4.	Escreva um procedimento que receba a Largura e o Comprimento do 
//quadrado/retângulo por parâmetro, calcule e retorne também por parâmetro a área (Area).

void calcular_area(float larg, float comp, float *media){
	*media = (larg*2) * (comp*2);
}

void main(){
	float larg, comp, media;
	
	printf("Informe a Largura: ");
	scanf("%f", &larg);
	printf("Informe o Comprimento: ");
	scanf("%f", &comp);
	
	calcular_area(larg, comp, &media);
	
	printf("Media: %0.2f", media);
}
