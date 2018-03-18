#include <stdio.h>
#include <locale.h> //utf-8

int main() {

	setlocale (LC_ALL, "");

	int val1, val2, opera;
	float total;


	printf("Projeto Calculador\n\n");
	printf("Digite o 1° valor: \n");
	scanf("%d", &val1);
	printf("Digite o 2° valor: \n");
	scanf("%d", &val2);
	printf("\nAgora escolha a operação:\n" );
	printf(" 1 para + \n 2 para - \n 3 para * \n 4 para /\n\n");
	scanf("%d", &opera);

	if(opera > 4 && opera < 1) {
		printf("Operação inválida\n");
	} else if(opera == 1) {
		total = val1 + val2;
		printf("A soma dos valores é: %.2f\n", total);
	} else if(opera == 2) {
		total = val1 - val2;
		printf("A subtração dos valores é: %.2f\n", total);
	} else if(opera == 3) {
		total = val1 * val2;
		printf("A multiplicação dos valores é: %.2f\n", total);
	} else {
		total = (float)val1 / (float)val2;
		printf("A divisão dos valores é: %.2f\n", total);
	}
}