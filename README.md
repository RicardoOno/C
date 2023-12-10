ATV 10

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

    int size = 0, count = 0;
    
    while(string[count] != '\0') {
        size++;
        count++;
    }

    return size;
}
```
