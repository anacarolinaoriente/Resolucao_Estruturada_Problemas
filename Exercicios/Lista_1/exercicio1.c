#include <stdio.h>
#include <conio.h>

//1. Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.//
//R2  = (3.14 * raio^2)


void main(){
	float raio, area;
	printf("<<<Calcular a Area do Circulo>>>");
	printf("\n\nInforme o raio de um circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * raio * raio;
	printf("Area do circulo: %0.2f", area);
	
}
