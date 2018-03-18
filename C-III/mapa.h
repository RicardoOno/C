
//estrutura que contei variaveis que vivem juntos. Ex: calendario de data e mes
struct mapa {
	char** matriz;
	int linhas;
	int colunas;
	
};

//CRIA UM ALIAS PRA struct mapa
typedef struct mapa MAPA;

void lemapa(MAPA* m);
void imprimemapa(MAPA* m);
void liberamapa(MAPA* m);
void alocamapa(MAPA* m);
