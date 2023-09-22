#include <stdio.h>
#include <conio.h>

//4.Fazer um programa em "C" que lê um conjunto de 
//10 valores inteiros e verifica se algum dos valores 
//é igual à média dos mesmos.

#define TF 5

void carregar_vetor(float vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o vetor[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[TF]){
	int i, cont_vet = 0;
	float media;
	printf("\n\n<<<Exibir Vetores>>>\n");
	for(i=0; i<TF; i++){
		cont_vet += vetor[i];
	}
	media = cont_vet / TF;
	printf("\nMedia: %0.2f", media);
	
	for(i=0; i<TF; i++){
		if(vetor[i] == media){
			printf("\nVetor[%d] = %0.2f ", i, vetor[i], media);
		}
	}
}
	
void main(){
	float vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
