#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* f;

	f = fopen("texto.txt", "r");
	if(f == 0){
		printf("Não foi possivel conectar com o Banco\n");
		exit(1);
	}

	char content[1000];
	fscanf(f, " %s ", content);
	printf("%s", content);
	
	fclose(f);
}