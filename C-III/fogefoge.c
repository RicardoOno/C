#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"
#include "fogefoge.h"

MAPA m; //typedef

int i, j;

int acabou(){
	return 0;
}

void move( char direcao){
	int x, y;

	//acje a posicao do foge-foge
	for(i = 0; i < m.linhas; i++){
		for(j = 0; j < m.colunas; j++){
			if(m.matriz[i][j] == '@'){
				x = i;
				y = j;
				break;
			}
		}
	}

	switch(direcao) {
		case 'a':
			m.matriz[x][y-1] = '@';
			break;
		case 'w':
			m.matriz[x-1][y] = '@';
			break;
		case 's':
			m.matriz[x+1][y] = '@';
			break;
		case 'd':
			m.matriz[x][y+1] = '@';
			break;
	}

	m.matriz[x][y] = '.';


}

int main() {
				// +1 por causa do \0
	// char mapa[5][10+1]; //matrix 5x10



	// mapa[0][0] = '|';
	// printf("%c %c\n", mapa[0][0], mapa[0][0]);
	
	lemapa(&m);

	do{
		imprimemapa(&m);
		char comando;
		scanf(" %c", &comando);
		move(comando);

	} while(!acabou());

	//////////////////////


	//matriz é um ponteiro de ponteiro
	//declaração int** <- ponteiro de ponteiro
	// int** v = malloc(sizeof(int) * 50); //memory allocation. sizeof pra ver quando bites precisa
	
	// for(i = 0; i < 5; i++){
	// 	v[i] = malloc(sizeof(int) * 10);
	// }

	// v[0][0] = 10;
	// v[0][1] = 12;
	
	// printf("Inteiro alocado %d %d\n", v[0][0], v[0][1]);

	// for(i = 0; i < 5; i++){
	// 	free(v[i]);
	// }
	// free(v);

	//////////////////////

	liberamapa(&m);

}