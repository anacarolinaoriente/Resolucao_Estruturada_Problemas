#include <stdio.h>
#include <conio.h>

//9.Escreva um algoritmo que leia 50 valores para um vetor de 50 posições. 
//Mostre depois somente os positivos.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n");
	for (i=0; i<TF; i++){
		
		printf("\nInforme os valores dos vetores[%d]: ", i);
		scanf("%d", &vetor[i]);
	
	}
}

void exibir_vetores(int vetor[TF]){
	int i;
	printf("\n\n<<<Exibir Vetores>>>\n");
	for (i=0; i<TF; i++){
		if(vetor[i] > 0){
			printf("\nVetores Positivos[%d] = %d", i, vetor[i]);
		}
	}
}


void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetores(vetor);
}
