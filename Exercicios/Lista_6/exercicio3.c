#include <stdio.h>
#include <conio.h>

//3.	Escreva uma função que receba 2 parametros (Nota1 e Nota2) calcule e retorne a média.

float calcula_media(float nota1, float nota2){
	float media;
	media = (nota1 + nota2) / 2;
	return media;
}

void main(){
	float media, nota1, nota2;
	printf("<<Media de duas notas>>\n\n");
	printf("Informe uma nota: ");
	scanf("%f", &nota1);
	printf("Informe outra nota: ");
	scanf("%f", &nota2);
	media = calcula_media(nota1, nota2);
	printf("Media: %0.2f", media);
}
