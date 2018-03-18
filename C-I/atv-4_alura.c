#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = abs(3);
	int b = abs(-3);
	int c = -3;
	int d = 3;
	printf("%d | %d\n", a, b);

	int total = abs(c * d); 
	printf("%d\n", total);

}