#include <stdio.h>
#include <conio.h>
#include <string.h>

//3.	Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
//a) da linha 3
//b) da coluna 2
//c) de todos os elementos da matriz

#define TL 4
#define TC 4

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			printf("Informe Matriz[%d][%d]: ", l,c);
			scanf("%d", &mat[l][c]);
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
		}	
	}
}

void somar_matriz(int mat[TL][TC]){
	int l, c, soma = 0, soma_l3 = 0, soma_c2 = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			//c
			soma += mat[l][c];
			//a
			if(l == 3){
				soma_l3 += mat[l][c];
			}
			//b
			if(c == 2){
				soma_c2 += mat[l][c];
			}
		}	
	}
	printf("\nSoma da Linha 3: %d", soma_l3);
	printf("\nSoma da Coluna 2: %d", soma_c2);
	printf("\nSoma da Matriz: %d", soma);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	somar_matriz(mat);
}
