//Escrever um programa que leia valores inteiros até ser lido o valor -99. Quando isso acontecer o programa deverá escrever a soma e a média dos valores lidos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	int valor, soma=0, media=0, cont=0;
	
	while(valor != -99){
		printf("Digite um valor, quando quiser parar digite -99: ");
		scanf("%d", &valor);
		
		if (valor != -99) {
        soma=soma+valor;		
		cont++; 
		media=soma/cont;
        }
	}
	printf("\nA soma dos valores da: %d \n",soma);
	printf("\nA media dos valores da: %d \n",media);
	return 0;
}
