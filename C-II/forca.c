#include <stdio.h>
#include <string.h> //para rodar a função strlen
#include <time.h>
#include <stdlib.h>
#include "forca.h" //possivel decalrar funç~eos de um modulo


//VARIAVEIS GLOBAIS PODEM SER VISTAS DE TODOS OS SCOPOS
char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados;

void novoChute(){
    
    char chute;
    printf("Qual a letra: ");
    scanf(" %c", &chute);

    chutes[(chutesdados)] = chute;
    (chutesdados)++;
    //UM ARRAY É UM PONTEIRO POR NATUREZA
    //VARIAVEIS INT/CHAR/FLOAT NÃO SAO PONTEIROS POR NATUREZA
}

//void é o que ela vai devolver. VOID = vazio
int jaChutou(char letra){

    int tem = 0;
    int j;

    for (j = 0; j < chutesdados; j++) {
        if (chutes[j] == letra) {
            tem = 1;
            break;
        }
    }
    return tem;
}

void desenhaForca(){
    int i;

     //imprime a palavra secreta
        for(i = 0; i < strlen(palavrasecreta); i++) {

            // O resultado de jaChutou irá para a variavel tem;
            int tem = jaChutou(palavrasecreta[i]);

            if(tem){
                printf("%c ", palavrasecreta[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");
}

void adicionaPalavra(){
    char quero;
    printf("Voce deseja add uma nova palavra no jogo? S/N\n");
    scanf(" %c", &quero);

    if(quero == 'S'){
        char novapalavra[TAMANHO_PALAVRA];
        printf("Qual a nova palavra: \n");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+");
         if(f == 0){
            printf("Banco de dados nao disponivel\n");
            exit(1);
        }

        int qtd;
        //PEGA A PRIMEIRA LINHA
        fscanf(f, "%d", &qtd);
        qtd++;

        //OVERWRITE NA PRIMEIRA LINHA
                    //constante
        fseek(f, 0, SEEK_SET); //posiciona a cabeça de leitura
        fprintf(f, "%d", qtd);

        //ADD NA ULTIMA LINHA
        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novapalavra);

        fclose(f);
    }
}

void escolhePalavra(){

    FILE* f;

    //sprintf(palavrasecreta, "MELANCIA"); //imprime um array de chars
    f = fopen("palavras.txt", "r"); //abrir um arquvio. É passado 2 parametros, o arquivo e o que eu quero fazer

    if(f == 0){
        printf("Banco de dados nao disponivel\n");
        exit(1);
    }

    int qtdpalavras;
    fscanf(f, "%d", &qtdpalavras); //ler um arquivo. f = o arquivo, %d = mascara, &qtdpalavra = ponteiro
    srand(time(0));
    int randomico = rand() % qtdpalavras; 

    int i;
    for(i = 0; i <= randomico; i++){
        fscanf(f, "%s", palavrasecreta);
    }
    printf("%s\n", palavrasecreta);

    fclose(f);
}

int enforcou(){
    int i;
    int erros = 0;
    for (i = 0; i < chutesdados; ++i) {   
        int existe = 0;
        int j;
        for (j = 0; j < strlen(palavrasecreta); j++) {
            if (chutes[i] == palavrasecreta[j]) {
                existe = 1;
                break;
            }
        }

        if(!existe) {
            erros++;
        }
    }
    return erros >= 5;
}

int acertou(){
    int i;
    for(i = 0; i < strlen(palavrasecreta); i++){
        if(!jaChutou(palavrasecreta[i])){
            return 0;
        }
    }
    return 1;
}

int main(){


    escolhePalavra();
    abertura();

    do {
        
        desenhaForca();
        novoChute();


    } while (!acertou() && !enforcou());
    if(acertou() == 1){
        printf("parabens\n");
    } 
    if(enforcou() == 1){
        printf("voce perdeu\n");
    }
    adicionaPalavra();
}

void abertura(){
    printf("*************\n");
    printf("* BEM VINDO *\n");
    printf("*************\n\n");
}

//Ternairo
    // condição ? V : F
// (erros= 1 ? 0 : 1)