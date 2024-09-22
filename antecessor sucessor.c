//Ler um número inteiro e imprimir seu sucessor e seu antecessor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	int num, ant, suc;
	
	printf("Digite um numero e lhe mostrarei o anteceNssor e o sucessor desse numero: ");
	scanf("%d",&num);
	
	ant=num-1;
	suc=num+1;
	
	printf("A sequencia ficou assim: %d, %d e %d\n", ant, num, suc);
	return 0;
}
