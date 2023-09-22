#include <stdio.h>
#include <conio.h>

//7.	Escreva um algoritmo que leia dois vetores de 10 posições e faça a 
//multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. 
//Mostre o vetor resultante.

#define TF 5

void carregar_vetor(int vetor1[TF], int vetor2[TF]){
	int i;
	printf("<<<Carregar Vetor 1>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o vetor1[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}
	printf("\n\n<<<Carregar Vetor 2>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o vetor2[%d]: ", i;
		scanf("%d", &vetor2[i]);
	}
}

void exibir_vetor(int vetor1[TF], int vetor2[TF]){
	int i;
	float mult[TF];
	printf("\n\n<<<Exibir Vetor>>>\n");
	for(i=0; i<TF; i++){
		if(vetor1[i] == vetor2[i]){
			mult[i] = vetor1[i] * vetor2[i];
			printf("\n\nMultiplicacao: %0 Vetor[%d] = %0.2f", i, mult[i]);
		}
	}
}

void main(){
	int vetor1[TF], vetor2[TF];
	carregar_vetor(vetor1, vetor2);
	exibir_vetor(vetor1, vetor2);
}
