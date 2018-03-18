#include <stdio.h>
#include <stdlib.h> //rand / srand 
#include <locale.h> //utf-8
#include <time.h> //tempo
//#define TRY_FOR 5 //constante

int main() {	
	// utf-8 setado
	setlocale (LC_ALL, "");

	// Cabeçalho do jogo
	printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    // system("pause");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    // printf("%d é o número secreto. Não conte para ninguem!", numerosecreto);
    
    // Receber um valor do usuário
    int chute;
    printf("%d\n", numerosecreto);
    int ganhou = 0;
    int try = 1;
    int tentativas = 5;
    double pontos = 1000;
    // declaração do cont é fora porque o compilador não aceita.
    // resolução: https://cursos.alura.com.br/forum/topico-problemas-com-for-41999
    //for(cont = 1; cont <= TRY_FOR; cont++) {
   	//while(1){
    for(try; try <= tentativas; try++){
    	//printf("Tentativa %d de %d\n", cont, TRY_FOR);
    	printf("Tentativa: %d --- Pontos: %.2f\n", try, pontos);
	    printf("Qual é o seu chute? \n");
	    scanf("%d", &chute);
	    //printf("Seu chute foi %d\n", chute);

	    if(chute < 0){
	    	printf("Valor inválido. Não pode entrar numero negativos\n");
	    	//cont--;
	    	continue;
	    }

	    // printf("%d %d\n", numerosecreto, chute );

	    // acertou = 0 ou 1 (false or true)
	    int acertou = (chute == numerosecreto);
	    int maior = chute > numerosecreto;
	    //int menor = chute < numerosecreto;

	    // variavel long é do tipo int so a capacidade de armazenamento é maior
	    // variavel short de 2bytes - int

	    //Tomada de decisão IF e ELSE
	    // if(chute == numerosecreto){
	    if(acertou) {
	    	printf("\n\n\n\nParabéns! Você acertou!\n");
	    	printf("Jogue de novo, você é um bom jogador\n");
	    	break;

	    } else if(maior) {
    		printf("Seu chute foi maior que o número secreto!!\n");
    	
    	} else {
    		printf("Seu chute foi menor que o número secreto!!\n");
    	}
    	try++;											// casting: mudar o tipo do valor
    	double pontosperdidos = (chute - numerosecreto) / (double)2;
    	// if(pontosperdidos < 0) {
    	// 	pontosperdidos = pontosperdidos * -1;
    	// }
    	pontos = pontos - abs(pontosperdidos);
    }
	//} //fim for
	printf("\n\n\n\nFim do jogo\n");
	printf("Foram necessárias %d tentativas\n", try);
	printf("Total de pontos: %d\n", pontos);
}