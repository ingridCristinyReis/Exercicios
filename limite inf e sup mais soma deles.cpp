//Criar um algoritimo que leia o limite inferior e superior de um intervalo e imprima todos os números pares no intervalo aberto e depois mostre o seu somatório. 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	int num,inf,sup;
	float soma=0;
	
	printf("Digite o limite inferior: ");
	scanf("%d",&inf);
	printf("Digite o limite superior: ");
	scanf("%d",&sup);
	
	if(inf%2==0){
		inf=inf+2;
	}
	else{
		inf=inf+1;
	}
	for(num=inf; num<=sup; num+=2){
		printf("Os numeros desse intervalo sao: %d \n",num);
		soma=soma+num;
	}
	printf("A soma dos numeros desse intervalo da: %.2f \n",soma);
	return 0;
}
