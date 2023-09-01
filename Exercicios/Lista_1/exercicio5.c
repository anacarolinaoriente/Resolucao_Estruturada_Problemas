#include <stdio.h>
#include <conio.h>

//5. [FOR] Criar um algoritmo em que leia dez números inteiros e imprima o maior e o segundo maior número da lista.

void main(){
	
	int i, num, num_maior = 0, seg_maior = 0;
	
	for (i = 1; i <= 3; i++){
		printf("Informe o numero: ");
		scanf("%d", &num);
		
		if(num > num_maior){
			seg_maior = num_maior;
			num_maior = num;
		}
		else{
			if(num_maior > num && num > seg_maior){
				seg_maior = num;
			}
		}
	}
	
	printf("Numero Maior: %0.2f", num_maior);
	printf("\nSegundo Maior: %0.2f", seg_maior);
}
