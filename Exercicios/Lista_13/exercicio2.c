#include <stdio.h>
#include <conio.h>
#include <string.h>

//2.	Carregar uma matriz 4x4 com números fornecidos pelo usuário. 
//Ao final ler um número informado pelo usuário e procurar se o mesmo está na matriz.

#define TL 2
#define TC 2

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

void verificar_matriz(int mat[TL][TC]){
	int l, c, num, cont = 0;
	printf("\n\nInforme o numero que sera procurado na matriz: ");
	scanf("%d", &num);
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			if(num == mat[l][c]){
				printf("\nNumero Encontrado na L: %d, C: %d", l, c);
				cont++;
			}
		}	
	}
	if(cont == 0){
		printf("\nNao encontrado");
	}
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	verificar_matriz(mat);
}
