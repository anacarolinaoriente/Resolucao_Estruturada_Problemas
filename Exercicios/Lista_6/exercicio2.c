#include <stdio.h>
#include <conio.h>

//2.	Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.

int calcula_idade(int aa, int an){
	int idade;
	idade = aa - an;
	return idade;
}

void main(){
	int idade, aa, an;
	printf("<<Calcula idade>>\n\n");
	printf("Informe o ano atual: ");
	scanf("%d,", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d,", &an);
	idade = calcula_idade(aa, an);
	printf("Idade: %d", idade);
}
