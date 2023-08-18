#include <stdio.h>
#include <conio.h>

//8 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 3 Notas
//3 - Maior Número
//4 - Menor Número
//5 - Sair

//O usuário deverá escolher qual opção deseja executar. 
//Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
//Para cada opção escolhida, o algoritmo deverá chamar o procedimento correspondente a opção, ou seja, teremos no mínimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento deverá ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida.

void calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcula a idade>>");
	printf("\n\nInforme o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	printf("Idade: %d\n\n", idade);
	system("pause");
}


void menu(){
	int opcao;
	do{
		system("cls");
		printf("Opcoes: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Média de 3 Notas");
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n5 - Sair");
		printf("\n\nInforme a opcao: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			calcular_idade();
		}
		else{
			if(opcao == 2){
				//media_tres_notas();
			}
			else{
				if(opcao == 3){
					//maior_numero();
				}
				else{
					if(opcao == 4){
						//menor_numero();
					}
				}
			}
		}

	}while(opcao != 5);
}

void main(){
	menu();
}
