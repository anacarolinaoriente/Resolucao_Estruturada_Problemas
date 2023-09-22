#include <stdio.h>
#include <conio.h>

//11.Faça um algoritmo que leia dois vetores (A e B) de 50 posições de números. 
//O algoritmo deve, então, subtrair o primeiro elemento de A do último de B, 
//acumulando o valor, subtrair o segundo elemento de A do penúltimo de B, acumulando o 
//valor, e assim por diante. Mostre o resultado da soma final.

#define TF 6

void carregar_vetor(int veta[TF]){
	int i;
	printf("<<<Carregar Vetor>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &veta[i]);
	}
}

void inverter_vetor(int veta[TF], int vetb[TF]){
	int i, j, sub[TF], cont = 0;
	printf("\n\n<<<Inverter Vetor>>>\n");
	for(i=0, j=TF-1; i<TF; i++, j--){
		vetb[i] = veta[j];
	}
	for(i=0; i<TF; i++){
		sub[i] = veta[j] - vetb[i];
		printf("\nSubtracao: %d", i, sub[i]);
		cont += sub[TF];
	}
	printf("\n\nSoma Subtracao: %d", cont);
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
