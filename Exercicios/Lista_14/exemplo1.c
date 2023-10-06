#include <stdio.h>
#include <conio.h>
#include <string.h>

//1.	Carregar uma matriz 3x3 e preencher com valores de 10 em 10 e exibir a soma da matriz no final.

#define TC 3
#define TL 3

void carregar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			soma += 10;
			mat[l][c] = soma;
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
	int l, c, soma = 0;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]); //para acessar a matriz, utilizar MATRIZ[LINHA][COLUNA]
			soma += mat[l][c];
		}	
	}
	printf("\nSoma da Matriz: %d", soma);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	somar_matriz(mat);
}
