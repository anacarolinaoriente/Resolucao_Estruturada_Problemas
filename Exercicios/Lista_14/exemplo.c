#include <stdio.h>
#include <conio.h>
#include <string.h>

//4.	Carregar uma matriz 3x3 com número inteiros, gerar uma nova matriz com os número da matriz carregada, multiplicados por 2.

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

void mult_matriz(int mat[TL][TC], int mat_mult[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){ //este for, percorre as linhas
		for(c=0;c<TC;c++){ //este for, percorre as colunas
			mat_mult[l][c] = mat[l][c] * 2;
		}	
	}
}

void main(){
	int mat[TL][TC], mat_mult[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	mult_matriz(mat, mat_mult);
	printf("\n\n<<Matriz Multiplicada por 2>>\n");
	exibir_matriz(mat_mult);
}
