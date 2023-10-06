#include <stdio.h>
#include <conio.h>

//5.	Leia uma matriz de 3 x 3 elementos. Calcule a média dos elementos que estão na diagonal principal.

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

void media_matriz(int mat[TL][TC]){
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
	printf("\n\nMedia Matriz Diagonal: %0.2f", media);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	media_matriz(mat);
}
