#include <stdio.h>
#include <conio.h>

//8.	Fa�a um programa para gerar automaticamente n�meros entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela dever� 
//conter 5 linhas de 5 n�meros, gere estes dados de modo a n�o ter n�meros repetidos dentro das cartelas. 
//O programa deve exibir na tela a cartela gerada.
//Para fazer com que um n�mero 'x' receba um valor entre 0 e 99, fazemos:
//limite = 99
//x = ( rand() % limite) -> fun��o rand�mica que calcula um n�mero aleat�rio at� o limite
//usleep(100000) -> pausa o software por um per�odo de tempo. Necess�rio utilizar a biblioteca #include <unistd.h>

#define TL 5
#define TC 5

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	srand( (unsigned)time(NULL) );
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			mat[l][c] = rand() % 99;	
		}
	}
	
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){ 
			printf("%d | ", mat[l][c]);
		}	
		printf("\n");
	}
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
}
