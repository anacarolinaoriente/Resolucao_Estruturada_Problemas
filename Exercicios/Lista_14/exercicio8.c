#include <stdio.h>
#include <conio.h>

//8.	Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá 
//conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. 
//O programa deve exibir na tela a cartela gerada.
//Para fazer com que um número 'x' receba um valor entre 0 e 99, fazemos:
//limite = 99
//x = ( rand() % limite) -> função randômica que calcula um número aleatório até o limite
//usleep(100000) -> pausa o software por um período de tempo. Necessário utilizar a biblioteca #include <unistd.h>

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
