#include <stdio.h>
#include <conio.h>

//7.	Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da média da diagonal principal.

#define TL 3
#define TC 3

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

void soma_media(int mat[TL][TC]){
	int l, c, soma = 0, cont = 0;
	float media;
	
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(l == c){
				soma += mat[l][c];
				cont++;
			}
		}
	}
	media = soma / cont;
	printf("\n\nMedia %0.2f", media);
	
	int soma2 = 0;
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			if(mat[l][c] < media){
				soma2 += mat[l][c];
			}
		}
	}
	printf("\n\nSoma dos Elementos Abaixo da Media: %d", soma2);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	soma_media(mat);
}
