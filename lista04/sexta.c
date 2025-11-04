#include <stdio.h>
#include <string.h>
#define TAM 30

int main() {
    char string[TAM], string2[TAM];
    char *pOrigem = string, *pDestino = string2;

    printf("Digite algo de até 30 caracteres: ");
    fgets(string, TAM, stdin);

    strcpy(string2, string);

    while (*pOrigem != '\0') {
        *pDestino = *pOrigem;
        pOrigem++;
        pDestino++;
    }
    *pDestino = '\0';

    printf("String copiada: %s", string2);
    return 0;
}
