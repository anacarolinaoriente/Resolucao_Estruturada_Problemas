#include <stdio.h>
#include <conio.h>

//5.	Ler um vetor D de 10 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa, ou seja, 
//o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Escrever todo o vetor D e todo o vetor E.

#define TF 5

void carregar_vetor(int vetd[TF]){
	int i;
	printf("<<<Carregar Vetor>>>\n\n");
	for(i=0; i<TF; i++){
		printf("Informe o Vetor[%d]", i);
		scanf("%d", &vetd[i]);
	}
}

void inverter_vetor(int vetd[TF], int vete[TF]){
	int i, j;
	printf("\n\n<<<Inverter Valores Vetores>>>\n");
	for(i=0; j=TF-1, i<TF; i++, j--){
		
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
	int vetd[TF], vete[TF];
	carregar_vetor(vetd);
	
	inverter_vetor(vetd, vete);
	
	printf("<<<\n\nExibicao Vetor D: >>>");
	exibir_vetor(vetd);
	
	printf("<<<\n\nExibicao Vetor E: >>>");
	exibir_vetor(vete);
	
}
