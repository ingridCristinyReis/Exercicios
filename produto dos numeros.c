//Ler um n�mero do teclado e imprimir todos os n�meros de 1 at� o n�mero lido. Imprimir o produto dos n�meros
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main(){
	int num, loop, produto=1;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num<=0){
		printf("Digite um n�mero maior que 0! \n");
	}
	printf("Os numeros de 1 ate %d sao: ",num);
	for (loop = 1; loop <= num; loop++) {
        printf("%d ", loop);
        produto *= loop;  
    }
    printf("\nE o produto deles da: %d\n",produto);
    return 0;
}
