#include <stdio.h>
#include <conio.h>

//3.	Preencher um vetor B de 5 elementos com 1 se o n�mero informado pelo usu�rio �mpar e com 0 se for par. Escrever o vetor B ap�s o seu total preenchimento.

#define TF 5

void carregar_vetor(int vetor[TF]){
	int i;
	printf("<<<Carregar Vetor>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o Vetor[%d]", i);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] % 2 == 0){
			vetor[i] = 0;
		}
		else{
			vetor[i] = 1;
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
