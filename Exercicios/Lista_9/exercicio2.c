#include <stdio.h>
#include <conio.h>

//2.	Preencher um vetor A de 5 elementos com os n�meros fornecidos pelos usu�rios.  Escrever o vetor A ap�s o seu total preenchimento.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetores>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
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
