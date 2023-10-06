#include <stdio.h>
#include <conio.h>

//1.	Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

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
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]);
		}	
	}
}

void localizar_matriz(int mat[TL][TC]){
	int l, c, cont=0;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(mat[l][c] > 10){
				cont ++;
			}
		}
	}
	printf("\n\nQuantidade de valor maior que 10: %d", cont);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	localizar_matriz(mat);
}
