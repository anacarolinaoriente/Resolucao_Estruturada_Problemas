#include <stdio.h>
#include <conio.h>

//4. [FOR] Escreva um algoritmo em que leia 20 n�meros e imprima a soma dos positivos e o total de n�meros negativos. 

void main(){
	
	int i, num, cont_neg = 0, soma_pos = 0;
	
	for (i = 1; i <= 4; i++){
		printf("Informe o numero: ");
		scanf("%d", &num);
		
		if (num < 0){ //negativo
			cont_neg++;
		}
		else{ //positivo
			soma_pos += num;
		}
	}
	printf("\nQuantidade de Negativos: %0.2d", cont_neg);
	printf("\nSoma Positivos: %0.2d", soma_pos);
}
