#include <stdio.h>
#include <conio.h>
#include <string.h>

//3.	Faça um procedimento que receba uma string e a retorne escrita de trás pra frente.

void inverter_texto(char texto[2000]){
	int i, j, fim;
	char aux;
	
	fim = strlen(texto);
	
	for(i = 0, j = fim - 1; i < j; i++, j--){
		aux = texto[i];
		texto[i] = texto[j];
		texto[j] = aux;
	}
}

void main(){
	char texto[2000];
	printf("Informe o texto: ");
	gets(texto);
	inverter_texto(texto);
	printf("Texto Invertido: %s", texto);
}
