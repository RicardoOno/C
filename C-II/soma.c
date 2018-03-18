#include <stdio.h>

void soma(int val1, int val2, int* total) {
	
	printf("MAIN - SOMA 1: %d\n", total);
	(*total) = val1 + val2;
	printf("MAIN - SOMA 2: %d\n", total);
	
}

int main() {
	
	int a, b, num;

	printf("Digite um valor:\n");
	scanf("%d", &a);
	printf("Digite um valor:\n");
	scanf("%d", &b);
	
	printf("MAIN - NUM 1: %d\n", &num);
	soma( a, b, &num );
	
	printf("A soma de %d + %d = %d\n", a, b, num);

	printf("MAIN - NUM 2: %d\n", &num);
	

}