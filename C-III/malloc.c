#include <stdio.h>
#include <stdlib.h>

char** matriz;
int linhas = 5;
int colunas = 10;
int i, j;


void alocacao(){

	matriz = malloc(sizeof(char*) * linhas);
	for(i = 0; i < linhas; i++) {
		matriz[i] = malloc(sizeof(char) * (colunas + 1));
	}

}

void liberacao(){

	for(i = 0; i < linhas; i++){
		free(matriz[i]);
	}
	free(matriz);

}

int main() {

	alocacao();
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf(".", matriz[i][j]);
		}
		printf("\n");
	}

	liberacao();

}