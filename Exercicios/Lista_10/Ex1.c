#include <stdio.h>
#include <conio.h>

//1.	 Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valor lido.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o valor do vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetores(int vetor[TF]){
	int i, num_menor = 0, num_maior = 0;
	printf("\n\n<<<Exibir Vetores>>>\n");
	for(i=0; i<TF; i++){
		if (i == 0){
			num_maior = vetor[i];
			num_menor = num_maior;
		}
		else{
			if(vetor[i] > num_maior){
				num_maior = vetor[i];
			}
			else{
				if(vetor[i] < num_maior){
					num_menor = vetor[i];
				}
			}
		}
		
	}
	printf("\nNumero Maior: %d", num_maior);
	printf("\nNumero Menor: %d", num_menor);
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetores(vetor);
}
