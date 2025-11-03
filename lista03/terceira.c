#include <stdio.h>
#include <stdlib.h>
#define TAM 80

int main() {
    char string[TAM];
    int contador = 0;

    fgets(string, TAM, stdin);
    for (int i = 0; string[i] != '\0'; i++) {
        if(string[i] != ' ' && string[i] != '\n') contador++;
    }

    printf("A string possui %d caracteres.\n", contador);
    return 0;
}
