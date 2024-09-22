//Ler nome, endereço, telefone e imprimir
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()
{
	char nome[50], endereco[50], telefone[50];
	
	printf("Informe seu nome: \n");
	gets(nome);
	printf("Informe seu endereço: \n");
	gets(endereco);
	printf("Informe seu telefone: \n");
	gets(telefone);
	printf("Seu nome e %s, voce mora em %s e o seu telefone e %s \n", nome, endereco, telefone);
	system("pause");
	return 0;
}
