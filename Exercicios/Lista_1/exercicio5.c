#include <stdio.h>
#include <conio.h>

//5. [FOR] Criar um algoritmo em que leia dez números inteiros e imprima o maior e o segundo maior número da lista.

void main(){
	
	int i, num, num_maior = 0, seg_maior = 0;
	
	for (i = 1; i <= 5; i++){
		printf("Informe o numero: ");
		scanf("%d", &num);
		
		num_maior = 0;
		seg_maior = 0;
		
		if(num_maior < num){
			num_maior = num;
		}
		else{
			if(seg_maior < num_maior){
				seg_maior = num_maior;
			}
		}
	}
	
	printf("Numero Maior: %0.2f", num_maior);
	printf("Segundo Maior: %0.2f", seg_maior);
}
