#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

int main() {
    char string[TAM], inversa[TAM];

    printf("Digite uma palavra: ");
    fgets(string, TAM, stdin);
    
    printf("Sua palavra ao contrário:");
    for (int i = strlen(string); i >= 0; i--) printf("%c", string[i]);
    printf("\n");
    return 0;
}
