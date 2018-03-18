#include <stdio.h>

//&c = E comercial é a alocação da memoria da variavel
// int* = olha aqui nao vai ser um interio, vai ser o 
// endereço de memoria de um interio

void calcula(int* c2){
	printf("CALCULA 1: %d %d\n", (*c2), c2 );
	(*c2)++;
	printf("CALCULA 2: %d %d\n", (*c2), c2 );	
}


int main() {	
	int c = 10;
	printf("MAIN 1: %d %d\n", c, &c);
	calcula(&c);
	printf("MAIN 2: %d %d\n", c, &c);
}