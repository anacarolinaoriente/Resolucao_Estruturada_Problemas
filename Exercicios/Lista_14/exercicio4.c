#include <stdio.h>
#include <conio.h>

//4.	Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.

#define TL 4
#define TC 4

void carregar_matriz(int mata[TL][TC]){
	int l, c;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			printf("Informe Matriz[%d][%d]: ", l,c);
			scanf("%d", &mata[l][c]);
		}
	}
}

void exibir_matriz(int mata[TL][TC]){
	int l, c;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			printf("\nMat[%d][%d] = %d", l, c, mata[l][c]);
		}
	}
}

void matriz_c(int mata[TL][TC], int matb[TL][TC], int matc[TL][TC]){
	int l, c;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(mata[l][c] > matb[l][c]){
				matc[l][c] = mata[l][c]; 
			}
			else{
				matc[l][c] = matb[l][c];
			}
		}
	}
}

void main(){
	int mata[TL][TC], matb[TL][TC], matc[TL][TC];
	carregar_matriz(mata);
	
	carregar_matriz(matb);
	
	printf("\n\n<<<Matriz A>>>\n");
	exibir_matriz(mata);
	
	printf("\n\n<<<Matriz B>>>\n");
	exibir_matriz(matb);
	
	matriz_c(mata, matb, matc);
	
	printf("\n\n<<<Matriz C>>>\n");
	exibir_matriz(matc);
}
