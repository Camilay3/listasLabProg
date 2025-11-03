#include <stdio.h>
#include <string.h>
#define TAM 20

// Protótipo de função
void comcat(char *, char *, char *);
void semcat(char *, char *, char *);

int main() {
    char string1[TAM], string2[TAM], concatenada[TAM*2];

    printf("Digite a primeira string: ");
    fgets(string1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAM, stdin);

    comcat(string1, string2, concatenada);
    semcat(string1, string2, concatenada);

    return 0;
}

void comcat(char *primeira, char *segunda, char *resultado) {
    resultado[0] = '\0';
    strcat(resultado, primeira);
    strcat(resultado, segunda);
    printf("O resultado com strcat é %s", resultado);
}

void semcat(char *primeira, char *segunda, char *resultado) {
    int i = 0, j = 0;

    while (primeira[i] != '\0') {
        resultado[i] = primeira[i];
        i++;
    }

    while (segunda[j] != '\0') {
        resultado[i + j] = segunda[j];
        j++;
    }

    resultado[i + j] = '\0';
    printf("O resultado sem strcat é %s", resultado);
}
