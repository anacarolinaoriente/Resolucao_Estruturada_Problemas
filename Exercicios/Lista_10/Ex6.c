#include <stdio.h>
#include <conio.h>

//6.Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o 
//menor elemento do vetor N e a sua posição dentro do vetor, mostrando: 
//"O menor elemento de N é", M, "e sua posição dentro do vetor é:", P.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetor(int vetor[TF]){
	int i, menor = 0;
	printf("\n\n<<<Exibir Vetores>>>\n");
	menor = vetor[i];
	for(i=0; i<TF; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
			printf("\nO menor elemento e: %d", menor, "E sua posicao dentro do vetor[%d] = %d", i, vetor[i] );
		}
	}
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
