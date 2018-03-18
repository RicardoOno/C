#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

int i,j;

void lemapa(MAPA* m){

	FILE* f;
	f = fopen("mapa.txt", "r");
	if (f == 0) {
		printf("Falha no carregamento do arquivo\n");
		exit(1);
	}

	fscanf(f, "%d %d", &(m->linhas), &(m->colunas));
	printf("linhas %d colunas %d\n", m->linhas, m->colunas);
			
	alocamapa(m);

	for(i = 0; i < 5; i++){
		//mapa[i] = passa a linha toda caso nao tiver outro parametro da matriz
		fscanf(f, "%s", m->matriz[i]);
	}


	fclose(f);
}

void alocamapa(MAPA* m){
	m->matriz = malloc(sizeof(char*) * m->linhas);
	for(i = 0; i < m->linhas; i++){
		m->matriz[i] = malloc(sizeof(char) * ( m->colunas + 1 ));
	}
}

void liberamapa(MAPA* m){

	for(i = 0; i < m->linhas; i++){
		free(m->matriz[i]);
	}
	free(m->matriz);
}

void imprimemapa(MAPA* m){
	for(i = 0; i < 5; i++){
		printf("%s\n", m->matriz[i]);
	}
}