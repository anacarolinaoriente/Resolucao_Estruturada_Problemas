#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste
//Observa��o: Caso o c�digo n�o seja nenhum dos especificados o produto deve ser encarado como Importado.

void main(){
	
	int cod;
	
	printf("Informe o codigo: ");
	scanf("%d", &cod);
	if (cod == 1){
		printf("Regiao Sul");
	}
	else{
		if (cod == 2){
			printf("Regiao Norte");
		}
		else{
			if (cod == 3){
				printf("Regiao Leste");
			}
			else{
				if (cod == 4){
					printf("Regiao Oeste");
				}
				else{
					if (cod == 5 || cod == 6){
						printf("Regiao Nordeste");
					}
					else{
						if (cod == 7 || cod == 8 || cod == 9){
							printf("Regiao Sudeste");
						}
						else{
							if (cod == 10){
								printf("Regiao Centro-Oeste");
							}
							else{
								if (cod == 11){
									printf("Regio Noroeste");
								}
								else{
									printf("Importado");
								}
							}
						}
					}
				}
			}
		}
				
	}
}
