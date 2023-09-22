#include <stdio.h>
#include <conio.h>

cc

#define TF 5

void inserir_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for (i=0; i<TF; i++){
		printf("Informe os vetores[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetores(int vetor[TF]){
	int i, vet_aux[TF], vet_imp[TF], vet_par[TF];
	printf("\n\n<<<Exibir Vetores>>>");
	for (i=0; i<TF; i++){
		
		if (vetor[i] % 2 == 0){
			vet_aux[i] = vet_imp[i];
			vet_imp[i] = vet_par[i];
		}
		else{
			vet_par[i] = vet_aux[i];
		}
		printf("\nVetor Vetor[%d] = %d", i, vetor[i]);
	}
}

void main(){
	int vetor[TF];
	inserir_vetor(vetor);
	exibir_vetores(vetor);
}
