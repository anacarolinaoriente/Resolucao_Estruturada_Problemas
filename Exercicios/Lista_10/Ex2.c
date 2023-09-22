#include <stdio.h>
#include <conio.h>

//2.Fazer uma rotina que recebe como parâmetro um array de 5 posições 
//contendo as notas de um aluno ao longo do ano e devolve a média do aluno.

#define TF 5

void calcular_vetor(float vetor[TF]){
	int i;
	printf("<<<Informar Notas>>>\n\n");
	for(i = 0; i < TF; i++){
		printf("Informe a Nota[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
}

void exibir_vetor(float vetor[TF]){
	int i;
	float media, cont_nota = 0;
	printf("\n<<<Exibir Media>>>\n\n");
	for(i = 0; i < TF; i++){
		cont_nota =  cont_nota + vetor[i];
	}
	media = cont_nota / TF;
	printf("Media: %0.2f", media);	
}

void main(){
	float vetor[TF];
	calcular_vetor(vetor);
	exibir_vetor(vetor);
}
