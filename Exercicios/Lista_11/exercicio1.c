#include <stdio.h>
#include <conio.h>
#include <string.h>

//1.	Escreva uma fun��o que retorne a mensagem "ol� mundo!". Est� fun��o 
//dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.

char *funcao_ola_mundo(){
	return "OLA MUNDO DE TI";
}

void main(){
	printf("\nRetorno >> %s", funcao_ola_mundo());
}

