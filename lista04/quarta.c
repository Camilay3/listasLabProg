#include <stdio.h>
#define TAM 5

int main() {    
    int i, vetorInt[TAM];
    float vetorFloat[TAM];
    char vetorChar[TAM];

    printf("=== Vetor de int ===\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite o valor inteiro %d: ", i + 1);
        scanf("%d", &vetorInt[i]);
    }

    printf("\nValores e endereços do vetor de int:\n");
    for (i = 0; i < TAM; i++) printf("vetorInt[%d] = %d\t | Endereço: %p\n", i, vetorInt[i], &vetorInt[i]);

    printf("\n=== Vetor de float ===\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite o valor real %d: ", i + 1);
        scanf("%f", &vetorFloat[i]);
    }

    printf("\nValores e endereços do vetor de float:\n");
    for (i = 0; i < TAM; i++) printf("vetorFloat[%d] = %.2f\t | Endereço: %p\n", i, vetorFloat[i], &vetorFloat[i]);

    printf("\n=== Vetor de char ===\n");
    for (i = 0; i < TAM; i++) {
        printf("Digite o caractere %d: ", i + 1);
        scanf(" %c", &vetorChar[i]);
    }

    printf("\nValores e endereços do vetor de char:\n");
    for (i = 0; i < TAM; i++) printf("vetorChar[%d] = %c\t | Endereço: %p\n", i, vetorChar[i], &vetorChar[i]);

    return 0;
}
