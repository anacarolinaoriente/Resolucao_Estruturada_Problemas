#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto e imprima na tela a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste
//Observação: Caso o código não seja nenhum dos especificados o produto deve ser encarado como Importado.

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
