#include <stdio.h>
#include <conio.h>

//10.Faça um algoritmo que leia um vetor de 500 posições de números e dívida 
//todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.

#define TF 5

void carregar_vetores(float vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe os vetores[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[TF]){
	int i, cont_vet = 0;
	float div, num_maior = 0;
	printf("\n\n<<<Exibir Vetores>>>\n");
	for(i=0; i<TF; i++){
		
		cont_vet += vetor[i];
		
		if(num_maior < vetor[i]){
			num_maior = vetor[i];
			printf("\nVetor[%d] = %f ", i, vetor[i], num_maior);
		}
		
	}
	
	div = cont_vet / num_maior;
	printf("\nDivisao: %0.2f", div);
}

void main(){
	float vetor[TF]; 
	carregar_vetores(vetor);
	exibir_vetor(vetor);
}
