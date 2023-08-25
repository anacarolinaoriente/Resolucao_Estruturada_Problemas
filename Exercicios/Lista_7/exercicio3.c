#include <stdio.h>
#include <conio.h>

//3.	Escreva um procedimento que receba 2 parâmetros (Nota1 e Nota2) calcule e retorne também por parâmetro a média (Media).

void calcular_media(int nota1, int nota2, int *media){
	*media = (nota1 + nota2) / 2;
}

void main(){
	int nota1, nota2, media;
	
	printf("Informe a Nota 1: ");
	scanf("%d", &nota1);
	printf("Informe a Nota 2: ");
	scanf("%d", &nota2);
	
	calcular_media(nota1, nota2, &media);
	
	printf("Media: %d", media);
}
