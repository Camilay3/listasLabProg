#include <stdio.h>
#include <string.h>
#define TAM 10

int main() {
    char string[TAM], string2[TAM], concatenado[TAM*2];
    char *pString = string, *pString2 = string2, *pConcatenado = concatenado;

    printf("Digite algo de até 10 caracteres: ");
    fgets(pString, TAM, stdin);
    printf("Digite algo de até 10 caracteres: ");
    fgets(pString2, TAM, stdin);

    pConcatenado[0] = '\0';
    strcat(pConcatenado, pString);
    strcat(pConcatenado, pString2);

    printf("Concatenado: %s\n", pConcatenado);
    return 0;
}
