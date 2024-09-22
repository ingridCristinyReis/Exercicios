//Receber um nome no teclado e imprimi-lo dez vezes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

	int main()
	{
		int vezes;
		char nome[50];
		
		printf("Digite o seu nome: \n");
		gets(nome);
		for(vezes=1; vezes <= 10; vezes++){
			printf("%d: %s; \n", vezes, nome);
		}
		system("pause");
		return 0;
	}
