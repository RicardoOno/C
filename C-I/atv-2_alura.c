#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "");

	printf("Programa de multiplicação\n");
	
	int x, y, total;

	printf("Digite o valor de x: \n");
	scanf("%d",  &x);
	printf("Digite o valor de y:\n");
	scanf("%d", &y);

	total = x * y;

	printf("Total da multiplicação entre x = %d e y = %d é igual a %d \n", x, y, total);
}