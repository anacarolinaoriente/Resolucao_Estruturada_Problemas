#include <stdio.h>
#include <conio.h>

//1.	Carregar um vetor X de 10 elementos com os valores de 10 em 10 e exibi-lo no final.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>");
	for(i=0; i<TF; i++){
		vetor[i] = i * 10 + 10;
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Exibir Vetores>>>\n");
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);
	}
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
