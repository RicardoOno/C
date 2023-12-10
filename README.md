# ATV 8
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdel(char* string, int p);

int main() {

    char *output = strdel("FATEC", 0);
    printf("%s", output);

    free(output);
    output = NULL;

    return 0;
}

char *strdel(char* string, int p) {
    
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

    int size = strlen(stringInicial) + strlen(stringFinal) + 100;

    char *output = (char*)malloc(size * sizeof(char));
    memset(output, 0x00, size * sizeof(char));

    int count = 0;

    // sprintf para concaternar 2 string
    sprintf(output, "%s%s", stringInicial, stringFinal);
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
    //  ------------------------------------------------

    return output;

}
```

