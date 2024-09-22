//Escrever seu nome na tela 10x. Um nome por linha.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

	int main()
	{
		int vezes;
		
		printf("Digite o seu nome: \n");
		
		for(vezes=1; vezes <= 10; vezes++){
			printf("%d:Ingrid Reis; \n", vezes);
		}
		system("pause");
		return 0;
	}
