#include <stdio.h>
#include <conio.h>

//8 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 3 Notas
//3 - Maior N�mero
//4 - Menor N�mero
//5 - Sair

//O usu�rio dever� escolher qual op��o deseja executar. 
//Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
//Para cada op��o escolhida, o algoritmo dever� chamar o procedimento correspondente a op��o, ou seja, teremos no m�nimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento dever� ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida.

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
		printf("\n2 - M�dia de 3 Notas");
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
