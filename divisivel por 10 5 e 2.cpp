//Ler um número do teclado e informar se ele é divisivel por 10, 5 e 2 ou se não é divisivel por nenhum destes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	int num;
	
	printf("Digite um numero e irei te informar se ele e divisivel por 10, 5 ou 2: ");
	scanf("%d",&num);
	
	if(num % 10==0){
		printf("Seu numero %d e divisivel por 10!\n",num);
	}
	if(num % 5==0){
		printf("Seu numero %d e divisivel por 5!\n",num);
	}
	if(num % 2==0){
		printf("Seu numero %d e divisivel por 2!\n",num);
	}
	if(num % 2==0 && num % 10==0 && num % 5==0){
		printf("Parabens, seu numero %d e divisivel por 10, 5 e 2!\n",num);
	}
	if(num % 2!=0 && num % 10!=0 && num % 5!=0){
		printf("Seu numero %d nao e divisivel por 10, 5 ou 2!\n",num);
	}
	system("pause");
	return 0;
}
