#include <stdio.h>
#include <string.h>
#define TAM 30

int main() {
    char string[TAM];

    printf("Digite algo de até 30 caracteres: ");
    fgets(string, TAM, stdin);
    printf("O tamanho é %ld\n", strlen(string)-1);

    return 0;
}
