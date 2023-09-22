#include <stdio.h>
#include <conio.h>

//12.	Faça um algoritmo que leia um vetor A[10]. Inverta então os valores de A. 
//troque o primeiro pelo último, segundo pelo penúltimo e assim por diante. 
//Mostre o vetor A após as alterações.

#define TF 5

void carregar_vetor(int veta[TF]){
	int i;
	printf("<<<Carregar Vetor>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &veta[i]);
	}
}

void inverter_vetor(int veta[TF], int vetb[TF]){
	int i, j;
	printf("\n\n<<<Inverter Vetor>>>\n");
	for(i=0, j=TF-1; i<TF; i++, j--){
		vetb[i] = veta[j];
	}
	
}

void exibir_vetor(int vetor[TF]){
	int i;
	for(i=0; i<TF; i++){
		printf("\nVetor[%d] = %d", i, vetor[i]);	
	}
}

void main(){
	int veta[TF], vetb[TF];
	
	carregar_vetor(veta);
	
	inverter_vetor(veta, vetb);
	
	printf("\n<<<Exibicao Vetor A >>>");
	exibir_vetor(veta); 
	
	printf("\n\n<<<Exibicao Vetor B>>>");
	exibir_vetor(vetb); 
}
