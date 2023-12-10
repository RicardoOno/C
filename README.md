# ATV 6 
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char livros[10][100];
    
    int i = 0;
    for(i = 0; i < 10; i++) {
        printf("Digite o nome do %do livro: ", i+1);
        fgets(livros[i], 100, stdin);
        int size = strlen(livros[i]) - 1;
        livros[i][size] = '\0';
    }

    printf("\n\n-------------------------");
    for (i = 0; i < 10; i++) {
        printf("\n%do Titulo: %s", i+1, livros[i]);
    }
    
    printf("\n-------------------------");

    return 0;
}
```

# ATV 7
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE        1
#define FALSE       0

int strPos(char *string, char c);

int main() {

    char c = 'z';
    char value[] = "Faculdade de Tecnologia de Sao Pauloz";

    int pos = strPos(value, c);

    if(pos == -1) {
        printf("caracter '%c' nao encontrado na string: '%s'", c, value);
    } else {
        printf("caracter '%c' primeiro encontrado na posicao: %d", c, pos);
    }

    return 0;
}

int strPos(char *string, char c) {

    if(strlen(string) <= 0 ) return -1;

    int i;
    int found = FALSE;
    for( i = 0; i <= strlen(string); i++ ) {
        if( string[i] == c ) {
             found = TRUE;
             break;
        }
    }

    if(!found) {
        return -1;
    }

    return i;

}
```

# ATV 8
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *myStrdel(char* string, int p);

int main() {

    char *output = myStrdel("12", 2);
    printf("%s", output);

    if(output != NULL) {
        free(output);
        output = NULL;
    }

    return 0;
}

char *myStrdel(char* string, int p) {

    if(p >= strlen(string) || strlen(string) == 0) {
        return NULL;
    }

    int size = strlen(string) + 1;

    char *output = (char*)malloc( size * sizeof(char) );
    memset(output, 0x00, size * sizeof(char));

    int j, i;
    for (i = 0, j = 0; i < strlen(string); i++, j++) {
        if(i == p) {
            i++;
        }
        output[j] = string[i];
    }

    j++;
    output[j] = '\0';
    
    return output;

}
```

# ATV 9
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(char *string);

int main(){

    char value[]="LP_EXERCICIO P2 - Atv 10";
    int size = myStrlen(value);

    printf(" O tamanho da string '%s' eh  %d", value, size);
    
    return 0;
}

int myStrlen(char *string) {

    int count = 0;
    
    while(string[count] != '\0') {
        count++;
    }

    return count;
}
```

# ATV 10
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *myStrcat(char *stringInicial, char *stringFinal);

int main() {

    char *output = myStrcat("Felici", "dade");
    printf("%s", output);

    free(output);
    output = NULL;

    return 0;
}

char *myStrcat(char *stringInicial, char *stringFinal) {

    int size = strlen(stringInicial) + strlen(stringFinal) + 1;

    char *output = (char*)malloc(size * sizeof(char));
    memset(output, 0x00, size * sizeof(char));

    int count = 0;

    // sprintf para concaternar 2 string
    sprintf(output, "%s%s", stringInicial, stringFinal);
    output[size] = '\0';
    // -------------------------------------------------

    // 2 loopings. Primeiro looping para passar a stringInicial para uma terceira variavel. Segundo looping para concatenar a stringFinal a terceira variavel
    // while(stringInicial[count] != '\0') {
    //     output[count] = stringInicial[count];
    //     count++;
    // }

    // size = count;
    // count = 0;

    // while(stringFinal[count] != '\0') {
    //     output[size] = stringFinal[count];
    //     count++;
    //     size++;
    // }
    // printf("size: %d\n", size);
    // output[size+1]='\0';
    //  ------------------------------------------------
    
    return output;
}
```

