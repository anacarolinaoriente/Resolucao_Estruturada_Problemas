#include <stdio.h>
#include <conio.h>

//2.	Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

#define TL 5
#define TC 5

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
	printf("\n");
}

void alterar_matriz(int mat[TL][TC]){
	int l, c;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(l == c){
				mat[l][c] = 1;
			}
			else{
				mat[l][c] = 0;
			}
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]);
		}
	}
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	alterar_matriz(mat);
}
