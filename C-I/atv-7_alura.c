#include <stdio.h>

int main() {
	int valor, cont;
	printf("Digite um valor: \n");
	scanf("%d", &valor);

	for(cont = 1; cont <= 10; cont++){
		printf("Valor: %d \n", valor * cont);
	}
}