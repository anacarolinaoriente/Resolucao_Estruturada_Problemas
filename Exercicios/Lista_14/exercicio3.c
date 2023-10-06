#include <stdio.h>
#include <conio.h>

//3.	Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

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
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]);
		}
	}
}

void localizar_matriz_maior(int mat[TL][TC]){
	int l, c, mat_maior = 0;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(l==0 && c==0){
				mat_maior = mat[l][c];
			}
			else{
				if(mat[l][c] > mat_maior){
					mat_maior = mat[l][c];
				}
			}
		}
	}
	printf("\n\nMatriz Maior[%d][%d] = %d", l, c, mat_maior);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	localizar_matriz_maior(mat);
}
