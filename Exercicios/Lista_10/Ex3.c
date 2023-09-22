#include <stdio.h>
#include <conio.h>

//3.	Fazer uma rotina que recebe um array do tipo float e o número de 
//valores que devem ser solicitados ao usuário e 
//devolve o array preenchido com os valores digitados.

#define TF 5

void carregar_vetor(float vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe os vetores[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[TF]){
	int i;
	printf("\n\n<<<Exibir Vetor>>>\n");
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %0.1f", i, vetor[i]);
	}
}

void main(){
	float vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);	
}
