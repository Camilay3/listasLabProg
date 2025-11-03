#include <stdio.h>
#include <stdlib.h>
#define TAM 80

int main() {
    char string[TAM], caractere;

    fgets(string, TAM, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    for (int i = 0; string[i] != '\0'; i++) {
        if(string[i] == caractere) printf("O caractere %c existe na string.\n", caractere); 
    } 

    printf("%s\n", string); 
    return 0;
}
