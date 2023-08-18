#include <stdio.h>
#include <conio.h>

//3 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 4 Notas
//3 - Multiplicação de 2 Número
//4 - Divisão de 2 Número
//5 - Sair

//O usuário deverá escolher qual opção deseja executar. 
//Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
//Para cada opção escolhida, o algoritmo deverá chamar a função correspondente a opção, ou seja, teremos no mínimo 4 funções diferentes no algoritmo.
//Cada função deverão ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida. Retornar e exibir o resultado no programa principal.


int calcular_idade(){
	int aa, an, idade;
	
	printf("<<Calcula a idade>>");
	printf("\n\nInforme o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	
	idade = aa - an;
	return idade;
}

float media_quatro_notas(){
	 float media, n1, n2, n3, n4;
	 
	 printf("\n<<Media de quatro notas>>");
	 printf("\nInforme uma nota: ");
	 scanf("%f", &n1);
	 printf("Informe outra nota: ");
	 scanf("%f", &n2);
	 printf("Informe outra nota: ");
	 scanf("%f", &n3);
	 printf("Informe outra nota: ");
	 scanf("%f", &n4);
	 
	 media = (n1 + n2 + n3 + n4) / 4;
	 return media;
}

float multplicacao_dois_numeros(){
	float n1, n2, mult;
	
	printf("\n<<Multiplicacao de dois numeros>>");
	printf("\nInforme um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	
	mult = n1* n2;
	return mult;
}

float divisao_dois_numeros(){
	float n1, n2, div;
	
	printf("\n<<Divisao de dois numeros>>");
	printf("\nInforme um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	
	div = n1 / n2;
	return div;
}

void menu(){
	int opcao;
	float mult, div;
	do{
		system("cls");
		printf("Opcoes: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 4 Notas");
		printf("\n3 - Multiplicacao de 2 Numeros");
		printf("\n4 - Divisao de 2 Numeros");
		printf("\n5 - Sair");
		printf("\n\nInforme a opcao: ");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			printf("Idade: %d", calcular_idade());
		}
		else{
			if(opcao == 2){
				printf("Media de quatro notas: %0.2f", media_quatro_notas());
			}
			else{
				if(opcao == 3){
					printf("Multiplicacao: %0.2f", multplicacao_dois_numeros());
				}
				else{
					if(opcao == 4){
						printf("Multiplicacao: %0.2f", divisao_dois_numeros());
					}
					else{
						if(opcao == 5){
							//sair
						}
					}
				}
			}
		}
		printf("\n\n");
		system("pause");
	}while(opcao != 5);
}

void main(){
	menu();
}
