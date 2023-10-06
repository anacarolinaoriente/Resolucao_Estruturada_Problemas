#include <stdio.h>
#include <conio.h>

//9.	Faça programa que leia uma matriz 3 x 6 com valores reais.
//(a) Imprima a soma de todos os elementos das colunas ímpares.
//(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
//(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
//(d) Imprima a matriz modificada.

#define TL 3
#define TC 6

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

void soma_coluna_impar(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			if(c % 2 == 1){
				soma += mat[l][c];
			}
		}	
	}
	printf("\n\nSoma Coluna Impar: %d", soma);
}

void media_aritmetica(int mat[TL][TC]){
	int l, c, soma2 = 0, cont = 0;
	float media;
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			if(c == 2 && c == 4){
				soma2 += mat[l][c];
				cont++;
			}
		}	
	}
	media = soma2 / cont;
	printf("\n\nMedia Aritmetica: %0.2f", media);
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	soma_coluna_impar(mat);
	media_aritmetica(mat);
}
