#include <stdio.h>
#include <conio.h>

//4.	Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0. Escrever o vetor C modificado.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetor>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o Vetor[%d]", i);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
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
