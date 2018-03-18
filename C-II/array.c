#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void soma(int numeros[10]) {
	int i;
	int total = 0;
	for(i = 0; i < 10; i++){
		total = total + numeros[i];
	}
	printf("VALOR: %d\n", total);
}

int main() {
	int numeros[10];
	int i;
	for(i = 0; i < 10; i++){
		printf("Digite um numero:\n");
		scanf("%d", &numeros[i]);
	}
	soma(numeros);
}