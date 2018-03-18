#include <stdio.h>
#include <stdlib.h>

void potencia(int valor, int potencia){
	printf("VALOR: %d\n", valor);
	printf("POTENCIA: %d\n", potencia);
	int total = 1;
	int i;
	if(potencia == 0){
		printf("O valor eh: 1\n");
	} else {
		for(i = 0; i < potencia; i++){
			total = total * valor;
			printf("TOTAL: %d\n", total);
		}
	}
}

int main(){
	int val, pot;
	printf("Digite um valor\n");
	scanf("%d", &val);
	printf("Digite a potencia\n");
	scanf("%d", &pot);
	potencia(val, pot);
}