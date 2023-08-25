#include <stdio.h>
#include <conio.h>

//2.	Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento), 
//a data atual calcule a idade e retorne (Idade) por parâmetro.

void calcular_idade(int aa, int an, int *idade){
	*idade = aa - an;
}

void main(){
	int aa, an, idade;
	
	printf("Informe a Ano Atual: ");
	scanf("%d", &aa);
	printf("Informe a Ano de Nascimento: ");
	scanf("%d", &an);
	
	calcular_idade(aa, an, &idade);
	
	printf("Idade: %d", idade);
}
